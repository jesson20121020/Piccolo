project_begin()

project_name("python")
project_version("3.11.3")
project_source_dir("Python-3.11.3")

project_add_source_inclues(
	Modules/_abc.c
	Modules/_bisectmodule.c
	Modules/_codecsmodule.c
	Modules/_collectionsmodule.c
	Modules/_contextvarsmodule.c
	Modules/_csv.c
	Modules/_datetimemodule.c
	Modules/_functoolsmodule.c
	Modules/_heapqmodule.c
	Modules/_json.c
	Modules/_localemodule.c
	Modules/_lsprof.c
	Modules/_opcode.c
	Modules/_operator.c
	Modules/_pickle.c
	Modules/_randommodule.c
	Modules/_stat.c
	Modules/_statisticsmodule.c
	Modules/_struct.c
	Modules/_threadmodule.c
	Modules/_tracemalloc.c
	Modules/_typingmodule.c
	Modules/_weakref.c
	Modules/_xxsubinterpretersmodule.c
	Modules/arraymodule.c
	Modules/atexitmodule.c
	Modules/audioop.c
	Modules/binascii.c
	Modules/cmathmodule.c
	Modules/errnomodule.c
	Modules/faulthandler.c
	Modules/gcmodule.c
	Modules/getbuildinfo.c
	Modules/getpath.c
	/Modules/getpath_noop.c
	Modules/itertoolsmodule.c
	Modules/main.c
	Modules/mathmodule.c
	Modules/md5module.c
	Modules/mmapmodule.c
	Modules/posixmodule.c
	Modules/rotatingtree.c
	Modules/sha1module.c
	Modules/_sha3/sha3module.c
	Modules/sha256module.c
	Modules/sha512module.c
	Modules/signalmodule.c
	Modules/_sre/sre.c
	Modules/symtablemodule.c
	Modules/timemodule.c
	Modules/xxsubtype.c
	Modules/_blake2/blake2b_impl.c
	Modules/_blake2/blake2module.c
	Modules/_blake2/blake2s_impl.c
	################# above are Modules in pythoncore.vcxproj
	
	Modules/_queuemodule.c
	Modules/_asynciomodule.c
	Modules/selectmodule.c
	Modules/socketmodule.c
	Modules/unicodedata.c
	Modules/zlibmodule.c
	
	Objects/abstract.c
	Objects/accu.c
	Objects/boolobject.c
	Objects/bytearrayobject.c
	Objects/bytes_methods.c
	Objects/bytesobject.c
	Objects/call.c
	Objects/capsule.c
	Objects/cellobject.c
	Objects/classobject.c
	Objects/codeobject.c
	Objects/complexobject.c
	Objects/descrobject.c
	Objects/dictobject.c
	Objects/enumobject.c
	Objects/exceptions.c
	Objects/fileobject.c
	Objects/floatobject.c
	Objects/frameobject.c
	Objects/funcobject.c
	Objects/genericaliasobject.c
	Objects/genobject.c
	Objects/interpreteridobject.c
	Objects/iterobject.c
	Objects/listobject.c
	Objects/longobject.c
	Objects/memoryobject.c
	Objects/methodobject.c
	Objects/moduleobject.c
	Objects/namespaceobject.c
	Objects/object.c
	Objects/obmalloc.c
	Objects/odictobject.c
	Objects/picklebufobject.c
	Objects/rangeobject.c
	Objects/setobject.c
	Objects/sliceobject.c
	Objects/structseq.c
	Objects/tupleobject.c
	Objects/typeobject.c
	Objects/unicodectype.c
	Objects/unicodeobject.c
	Objects/unionobject.c
	Objects/weakrefobject.c

	Parser/action_helpers.c
	Parser/myreadline.c
	Parser/parser.c
	Parser/peg_api.c
	Parser/pegen.c
	Parser/pegen_errors.c
	Parser/string_parser.c
	Parser/token.c
	Parser/tokenizer.c

	Python/_warnings.c
	Python/asdl.c
	Python/ast.c
	Python/ast_opt.c
	Python/ast_unparse.c
	Python/bltinmodule.c
	Python/bootstrap_hash.c
	Python/ceval.c
	Python/codecs.c
	Python/compile.c
	Python/context.c
	Python/dtoa.c
	Python/dynamic_annotations.c

	Python/errors.c
	Python/fileutils.c
	Python/formatter_unicode.c
	Python/frame.c
	Python/frozen.c
	Python/future.c
	Python/getargs.c
	Python/getcompiler.c
	Python/getcopyright.c
	Python/getopt.c
	Python/getplatform.c
	Python/getversion.c
	Python/hamt.c
	Python/import.c
	Python/importdl.c
	Python/initconfig.c
	Python/marshal.c
	Python/modsupport.c
	Python/mysnprintf.c
	Python/mystrtoul.c
	Python/pathconfig.c
	Python/preconfig.c
	Python/pyarena.c
	Python/pyctype.c
	Python/pyfpe.c
	Python/pyhash.c
	Python/pylifecycle.c
	Python/pymath.c
	Python/pystate.c
	Python/pystrcmp.c
	Python/pystrhex.c
	Python/pystrtod.c
	Python/Python-ast.c
	Python/pythonrun.c
	Python/Python-tokenize.c
	Python/pytime.c
	Python/specialize.c
	Python/structmember.c
	Python/suggestions.c
	Python/symtable.c
	Python/sysmodule.c
	Python/thread.c
	Python/traceback.c
	################# above are Python in pythoncore.vcxproj

	Python/hashtable.c
	Python/deepfreeze/deepfreeze.c

	Modules/_io/_iomodule.c
	Modules/_io/bufferedio.c
	Modules/_io/bytesio.c
	Modules/_io/fileio.c
	Modules/_io/iobase.c
	Modules/_io/stringio.c
	Modules/_io/textio.c
	
	Modules/cjkcodecs/_codecs_cn.c
	Modules/cjkcodecs/_codecs_hk.c
	Modules/cjkcodecs/_codecs_iso2022.c
	Modules/cjkcodecs/_codecs_jp.c
	Modules/cjkcodecs/_codecs_kr.c
	Modules/cjkcodecs/_codecs_tw.c
	Modules/cjkcodecs/multibytecodec.c
)

if(TARGET_PLATFORM STREQUAL PLATFORM_WIN)
    project_add_source_inclues(
		PC/config.c
		PC/dl_nt.c
		PC/invalid_parameter_handler.c
		PC/msvcrtmodule.c
		PC/winreg.c
		Modules/_winapi.c
		Modules/_io/winconsoleio.c
		Python/dynload_win.c
	)
elseif(TARGET_PLATFORM STREQUAL PLATFORM_MAC)
    project_add_source_inclues("Mac")
endif()

# 头文件查找目录
project_add_include_dirs(
	"Python"
	"Include"
	"Include/internal"
	"PC"
)

project_add_definitions(Py_ENABLE_SHARED NO_PYC Py_BUILD_CORE Py_BUILD_CORE_BUILTIN _Py_HAVE_ZLIB)
project_add_definitions(VERSION="3.11" PLATLIBDIR="lib")

if(TARGET_PLATFORM STREQUAL PLATFORM_WIN)
	project_add_definitions(PREFIX=NULL EXEC_PREFIX=NULL)
	project_add_definitions(MS_DLL_ID="311")
	project_add_definitions(PY3_DLLNAME="${PROJECT_NAME}.dll")
	project_add_definitions(VPATH="..\\..")
	project_add_definitions("_CRT_SECURE_NO_WARNINGS /wd4819 /wd4018 /wd4996 /wd4101 /wd4244 /wd4267 /wd4311 /wd4312 /wd4133")
endif()

project_add_depends(zlib)
if (TARGET_PLATFORM STREQUAL PLATFORM_WIN)
	project_add_depends(version.lib Shlwapi.lib Ws2_32.lib Iphlpapi.lib Pathcch.lib bcrypt.lib)
else()
endif()
project_end()