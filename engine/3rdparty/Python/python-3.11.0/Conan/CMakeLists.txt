cmake_minimum_required(VERSION 3.2)

project(python311)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

if (APPLE AND BUILD_SHARED_LIBS)
	conan_basic_setup(KEEP_RPATHS)
	set(CMAKE_BUILD_WITH_INSTALL_RPATH ON)
	set(CMAKE_INSTALL_NAME_DIR "@rpath")
else()
	conan_basic_setup()
endif()

if (NOT PS4)
	set (CMAKE_C_STANDARD 11)
endif()

if (MSVC AND NOT BUILD_SHARED_LIBS)
	foreach(flag_var CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELWITHDEBINFO CMAKE_C_FLAGS_DEBUG CMAKE_C_FLAGS_RELWITHDEBINFO)
	string(REGEX REPLACE "/Z[iI7]" "" ${flag_var} "${${flag_var}}")
	set(${flag_var} "${${flag_var}} /Z7")
	endforeach()
endif()

option(PY_TRACE_REFS "Enable/Disable Py_TRACE_REFS" OFF)
option(PY_PLAIN_COMPILE "Enable/Disable PY_PLAIN_COMPILE" ON)

set(BUILD_FROM_CONAN ON)

if (PY_TRACE_REFS)
	set(Py_TRACE_REFS 1)
endif()
set(WITH_PYMALLOC 1)
if (PY_PLAIN_COMPILE)
	#default is on
	#set(WITH_DOC_STRINGS 1)
endif()

set(_PYTHONFRAMEWORK "\"\"")

# configure pyconfig
if (WIN32)
	configure_file(pyconfig_win32.h.in ${CMAKE_CURRENT_BINARY_DIR}/pyconfig.h)
elseif(PS4)
	#todo
	configure_file(pyconfig_ps4.h.in ${CMAKE_CURRENT_BINARY_DIR}/pyconfig.h)	
else()
	include(PyConfig.cmake)
	config_py(pyconfig.h.in ${CMAKE_CURRENT_BINARY_DIR})
endif()

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_definitions(-DVERSION="3.11")

if (MSVC)
	add_definitions("/D_CRT_SECURE_NO_WARNINGS /wd4819 /wd4018 /wd4996 /wd4101 /wd4244 /wd4267 /wd4311 /wd4312 /wd4133")
	add_definitions(-DVPATH="..\\..")
	add_definitions(-DPREFIX=NULL -DEXEC_PREFIX=NULL)
else()
	add_definitions(-DSOABI="cpython-311m" )
	add_definitions(-DPREFIX="/usr/local" -DEXEC_PREFIX="/usr/local" -DVPATH="" -DPYTHONPATH="")
	if (PS4)#todo
		add_definitions("-Dsetenv(X,Y,Z)=0" "-Dgetenv(X)=NULL" "-Dunsetenv(X)=0" "-Disatty(X)=0")
		add_definitions("-Dchdir(X)=-1" "-Dumask(X)=-1" "-Ddup2(X,Y)=-1"  "-Ddup(X)=-1" "-Draise(X)")
		add_definitions("-Dtzset(X)" "-Dlocaltime_r=localtime_s" "-Dgmtime_r=gmtime_s")
		add_definitions("-Dmy_getpagesize()=16384" "-Dmy_getallocationgranularity()=4096")
		add_definitions("-include ps4compat.h" "-include kernel.h")
	endif()
endif()

execute_process(COMMAND python ${CMAKE_SOURCE_DIR}/../Python/makeopcodetargets.py WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/../)
if (ANDROID)
	add_definitions(-DMAJOR_IN_SYSMACROS)
elseif (IOS)
	add_definitions("-pipe -fno-strict-aliasing -fvisibility=hidden")
elseif (WIN32)
	add_definitions(-DMS_DLL_ID="311" -DPY3_DLLNAME="${PROJECT_NAME}.dll")
endif()

add_definitions(-DNO_PYC -DPLATLIBDIR="lib" -DPy_BUILD_CORE -DPy_BUILD_CORE_BUILTIN)
add_definitions(-D_Py_HAVE_ZLIB)


if (NOT BUILD_SHARED_LIBS)
	add_definitions(-DPy_NO_ENABLE_SHARED)
endif()

set(MODULES_SOURCE_FILES
	../Modules/_abc.c
	../Modules/_bisectmodule.c
	../Modules/_codecsmodule.c
	../Modules/_collectionsmodule.c
	../Modules/_contextvarsmodule.c
	../Modules/_csv.c
	../Modules/_datetimemodule.c
	../Modules/_functoolsmodule.c
	../Modules/_heapqmodule.c
	../Modules/_json.c
	../Modules/_localemodule.c
	../Modules/_lsprof.c
	../Modules/_opcode.c
	../Modules/_operator.c
	../Modules/_pickle.c
	../Modules/_randommodule.c
	../Modules/_stat.c
	../Modules/_statisticsmodule.c
	../Modules/_struct.c
	../Modules/_threadmodule.c
	../Modules/_tracemalloc.c
	../Modules/_typingmodule.c
	../Modules/_weakref.c
	../Modules/_xxsubinterpretersmodule.c
	../Modules/arraymodule.c
	../Modules/atexitmodule.c
	../Modules/audioop.c
	../Modules/binascii.c
	../Modules/cmathmodule.c
	../Modules/errnomodule.c
	../Modules/faulthandler.c
	../Modules/gcmodule.c
	../Modules/getbuildinfo.c
	../Modules/getpath.c
	#../Modules/getpath_noop.c
	../Modules/itertoolsmodule.c
	../Modules/main.c
	../Modules/mathmodule.c
	../Modules/md5module.c
	../Modules/mmapmodule.c
	../Modules/posixmodule.c
	../Modules/rotatingtree.c
	../Modules/sha1module.c
	../Modules/_sha3/sha3module.c
	../Modules/sha256module.c
	../Modules/sha512module.c
	../Modules/signalmodule.c
	../Modules/_sre/sre.c
	../Modules/symtablemodule.c
	../Modules/timemodule.c
	../Modules/xxsubtype.c

	../Modules/_blake2/blake2b_impl.c
	../Modules/_blake2/blake2module.c
	../Modules/_blake2/blake2s_impl.c
	#################### above are Modules in pythoncore.vcxproj
	
	../Modules/_queuemodule.c
	../Modules/_asynciomodule.c
	../Modules/selectmodule.c
	../Modules/socketmodule.c
	../Modules/unicodedata.c
	../Modules/zlibmodule.c
)

set(OBJECTS_SOURCE_FILES
	../Objects/abstract.c
	../Objects/accu.c
	../Objects/boolobject.c
	../Objects/bytearrayobject.c
	../Objects/bytes_methods.c
	../Objects/bytesobject.c
	../Objects/call.c
	../Objects/capsule.c
	../Objects/cellobject.c
	../Objects/classobject.c
	../Objects/codeobject.c
	../Objects/complexobject.c
	../Objects/descrobject.c
	../Objects/dictobject.c
	../Objects/enumobject.c
	../Objects/exceptions.c
	../Objects/fileobject.c
	../Objects/floatobject.c
	../Objects/frameobject.c
	../Objects/funcobject.c
	../Objects/genericaliasobject.c
	../Objects/genobject.c
	../Objects/interpreteridobject.c
	../Objects/iterobject.c
	../Objects/listobject.c
	../Objects/longobject.c
	../Objects/memoryobject.c
	../Objects/methodobject.c
	../Objects/moduleobject.c
	../Objects/namespaceobject.c
	../Objects/object.c
	../Objects/obmalloc.c
	../Objects/odictobject.c
	../Objects/picklebufobject.c
	../Objects/rangeobject.c
	../Objects/setobject.c
	../Objects/sliceobject.c
	../Objects/structseq.c
	../Objects/tupleobject.c
	../Objects/typeobject.c
	../Objects/unicodectype.c
	../Objects/unicodeobject.c
	../Objects/unionobject.c
	../Objects/weakrefobject.c
)

set(PARSER_SOURCE_FILES
	../Parser/action_helpers.c
	../Parser/myreadline.c
	../Parser/parser.c
	../Parser/peg_api.c
	../Parser/pegen.c
	../Parser/pegen_errors.c
	../Parser/string_parser.c
	../Parser/token.c
	../Parser/tokenizer.c
)

set(PYTHON_SOURCE_FILES
	../Python/_warnings.c
	../Python/asdl.c
	../Python/ast.c
	../Python/ast_opt.c
	../Python/ast_unparse.c
	../Python/bltinmodule.c
	../Python/bootstrap_hash.c
	../Python/ceval.c
	../Python/codecs.c
	../Python/compile.c
	../Python/context.c
	../Python/dtoa.c
	../Python/dynamic_annotations.c

	../Python/errors.c
	../Python/fileutils.c
	../Python/formatter_unicode.c
	../Python/frame.c
	../Python/frozen.c
	../Python/future.c
	../Python/getargs.c
	../Python/getcompiler.c
	../Python/getcopyright.c
	../Python/getopt.c
	../Python/getplatform.c
	../Python/getversion.c
	../Python/hamt.c
	../Python/import.c
	../Python/importdl.c
	../Python/initconfig.c
	../Python/marshal.c
	../Python/modsupport.c
	../Python/mysnprintf.c
	../Python/mystrtoul.c
	../Python/pathconfig.c
	../Python/preconfig.c
	../Python/pyarena.c
	../Python/pyctype.c
	../Python/pyfpe.c
	../Python/pyhash.c
	../Python/pylifecycle.c
	../Python/pymath.c
	../Python/pystate.c
	../Python/pystrcmp.c
	../Python/pystrhex.c
	../Python/pystrtod.c
	../Python/Python-ast.c
	../Python/pythonrun.c
	../Python/Python-tokenize.c
	../Python/pytime.c
	../Python/specialize.c
	../Python/structmember.c
	../Python/suggestions.c
	../Python/symtable.c
	../Python/sysmodule.c
	../Python/thread.c
	../Python/traceback.c
	#################### above are Python in pythoncore.vcxproj

	../Python/hashtable.c
	../Python/deepfreeze/deepfreeze.c
)

set(_IO_SOURCE_FILES
	../Modules/_io/_iomodule.c
	../Modules/_io/bufferedio.c
	../Modules/_io/bytesio.c
	../Modules/_io/fileio.c
	../Modules/_io/iobase.c
	../Modules/_io/stringio.c
	../Modules/_io/textio.c
)
		
set(CJKCODECS_SOURCE_FILES
	../Modules/cjkcodecs/_codecs_cn.c
	../Modules/cjkcodecs/_codecs_hk.c
	../Modules/cjkcodecs/_codecs_iso2022.c
	../Modules/cjkcodecs/_codecs_jp.c
	../Modules/cjkcodecs/_codecs_kr.c
	../Modules/cjkcodecs/_codecs_tw.c
	../Modules/cjkcodecs/multibytecodec.c
)

set(HEADER_FILES
	../Include/abstract.h
	
	../Include/boolobject.h
	../Include/bytearrayobject.h
	../Include/bytesobject.h
	../Include/ceval.h
	../Include/codecs.h
	../Include/compile.h
	../Include/complexobject.h
	../Include/datetime.h
	../Include/descrobject.h
	../Include/dictobject.h
	../Include/dynamic_annotations.h
	../Include/enumobject.h
	../Include/errcode.h
	../Include/fileobject.h
	../Include/fileutils.h
	../Include/floatobject.h
	../Include/frameobject.h
	../Include/cpython/genobject.h
	../Include/import.h
	../Include/intrcheck.h
	../Include/iterobject.h
	../Include/listobject.h
	../Include/cpython/longintrepr.h
	../Include/longobject.h
	../Include/marshal.h
	../Include/memoryobject.h
	../Include/methodobject.h
	../Include/modsupport.h
	../Include/moduleobject.h
	../Include/object.h
	../Include/objimpl.h
	../Include/cpython/odictobject.h
	../Include/osdefs.h
	../Include/osmodule.h
	../Include/patchlevel.h
	../Include/cpython/picklebufobject.h
	../Include/py_curses.h
	../Include/pybuffer.h
	../Include/pycapsule.h
	../Include/internal/pycore_atomic_funcs.h
	../Include/internal/pycore_namespace.h
	../Include/cpython/pyctype.h
	../Include/cpython/pydebug.h
	../Include/pyerrors.h
	../Include/pyexpat.h
	../Include/cpython/pyfpe.h
	../Include/pyframe.h
	../Include/pyhash.h
	../Include/pylifecycle.h
	../Include/pymacro.h
	../Include/pymath.h
	../Include/pymem.h
	../Include/pyport.h
	../Include/pystate.h
	../Include/pystrcmp.h
	../Include/pystrtod.h
	../Include/Python.h
	../Include/pythonrun.h
	../Include/pythread.h
	../Include/pytypedefs.h
	../Include/rangeobject.h
	../Include/setobject.h
	../Include/sliceobject.h
	../Include/structmember.h
	../Include/structseq.h
	../Include/sysmodule.h
	../Include/token.h
	../Include/traceback.h
	../Include/tracemalloc.h
	../Include/tupleobject.h
	../Include/unicodeobject.h
	../Include/weakrefobject.h
	../Include/internal/pycore_function.h
	#################### above are Include in pythoncore.vcxproj
	
	../Include/bltinmodule.h
	../Include/cpython/cellobject.h
	../Include/cpython/classobject.h
	../Include/cpython/code.h
	../Include/cpython/context.h
	../Include/exports.h
	../Include/cpython/funcobject.h
	../Include/genericaliasobject.h
	../Include/internal/pycore_interpreteridobject.h
	../Include/internal/pycore_namespace.h
	../Include/opcode.h
	../Include/pydtrace.h
	../Include/pymacconfig.h
	../Include/internal/pycore_strhex.h
	../Include/typeslots.h
	../Include/warnings.h
)

list(APPEND SOURCE_FILES ../PC/config.c) # not only PC 

if (NOT WIN32 AND NOT PS4)
	list(APPEND SOURCE_FILES 
		../Modules/pwdmodule.c
		../Modules/fcntlmodule.c
		../Python/dynload_shlib.c
		)
endif()

if (WIN32)
	list(APPEND SOURCE_FILES
			../PC/dl_nt.c
			../PC/invalid_parameter_handler.c
			../PC/msvcrtmodule.c
			../PC/winreg.c

			../Modules/_winapi.c
			../Modules/_io/winconsoleio.c
			../Python/dynload_win.c)
elseif (PS4)
	list(APPEND SOURCE_FILES
			../Python/dynload_stub.c)
endif()

list(APPEND SOURCE_FILES
			${MODULES_SOURCE_FILES}
			${_IO_SOURCE_FILES}
			${CJKCODECS_SOURCE_FILES}
			${EXPAT_SOURCE_FILES}#
			${HASHLIB_SOURCE_FILES}#
			${DECIMAL_SOURCE_FILES}#
			${LZMA_SOURCE_FILES}#
			${OBJECTS_SOURCE_FILES}
			${PARSER_SOURCE_FILES}
			${PYTHON_SOURCE_FILES}
	)

source_group("Modules" FILES ${MODULES_SOURCE_FILES})
source_group("_io" FILES ${_IO_SOURCE_FILES})
source_group("cjkcodecs" FILES ${CJKCODECS_SOURCE_FILES})
source_group("Objects" FILES ${OBJECTS_SOURCE_FILES})
source_group("Parser" FILES ${PARSER_SOURCE_FILES})
source_group("Python" FILES ${PYTHON_SOURCE_FILES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
		"${CMAKE_SOURCE_DIR}/../Include"
		"${CMAKE_SOURCE_DIR}/../Include/internal"
		"${CMAKE_SOURCE_DIR}/../PC"
		"${CMAKE_SOURCE_DIR}/../Python")

add_library(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})

if (CONAN_LIBS)
	target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
endif()

if (BUILD_SHARED_LIBS)
	if (WIN32)
		target_link_libraries(${PROJECT_NAME} version.lib Shlwapi.lib Ws2_32.lib Iphlpapi.lib Pathcch.lib bcrypt.lib)
	else()
		target_link_libraries(${PROJECT_NAME} z)
	endif()
endif()

install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib)

if (WIN32 AND BUILD_SHARED_LIBS)
	install(FILES $<TARGET_PDB_FILE:${PROJECT_NAME}> DESTINATION pdb OPTIONAL)
endif()

file(GLOB INSTALL_HEADERS ../Include/*.h)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/pyconfig.h ${INSTALL_HEADERS}
	DESTINATION include)

install(DIRECTORY ../Include/cpython DESTINATION include)
