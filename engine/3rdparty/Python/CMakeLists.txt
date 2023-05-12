project_begin()

project_name("python")
project_version("3.11.3")
project_source_dir("Python-3.11.3")
project_add_source_inclues(
	"Include"
	"Modules"
	"Objects"
	"Parser"
	"Python"
)

if(TARGET_PLATFORM STREQUAL PLATFORM_WIN)
    project_add_source_inclues("PC")
elseif(TARGET_PLATFORM STREQUAL PLATFORM_MAC)
    project_add_source_inclues("Mac")
endif()

project_add_source_excludes(
    "Modules/_blake2"
    "Modules/_ctypes"
	"Modules/clinic"
	"Modules/_curses_panel.c"
	"Modules/_cursesmodule.c"
	"Modules/_dbmmodule.c"
	"Modules/_gdbmmodule.c"
	"Modules/_posixsubprocess.c"
	"Modules/_scproxy.c"
	"Modules/_ssl/cert.c"
	"Modules/_tkinter.c"
	"Modules/tkappinit.c"
	"Modules/fcntlmodule.c"
	"Modules/grpmodule.c"
	"Modules/nismodule.c"
	"Modules/ossaudiodev.c"
	"Modules/pwdmodule.c"
	"Modules/readline.c"
	"Modules/resource.c"
	"Modules/spwdmodule.c"
	"Modules/syslogmodule.c"
	"Modules/termios.c"
	"Python/dup2.c"
	"Python/dynload_hpux.c"
	"Python/dynload_shlib.c"
	"Python/emscripten_signal.c"
	"Modules/_ssl/debughelpers.c"
)

# 头文件查找目录
project_add_include_dirs(
	"Python"
	"Include"
	"Include/internal"
	"PC"
	"Modules/_decimal/libmpdec"
	"Modules/expat"
)

project_add_definitions(Py_BUILD_CORE _Py_HAVE_ZLIB Py_BUILD_CORE_BUILTIN Py_ENABLE_SHARED)

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
	project_add_definitions("CONFIG_64")
else()
	project_add_definitions("CONFIG_32")
endif()

if(TARGET_PLATFORM STREQUAL PLATFORM_WIN)
	project_add_definitions("MASM")
endif()

project_add_depends(bzip2 sqlite lzma zlib)
project_add_depend_externals(openssl)

project_end()