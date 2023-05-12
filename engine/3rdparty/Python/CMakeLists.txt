set(PROJECT_NAME "python")
# python版本选择
set(PYTHON_VERSION "3.11.3" CACHE STRING "Specify Which Python Version Used")
# python源码所在目录
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/Python-${PYTHON_VERSION})

# 根据平台指定源码目录包含列表
list(APPEND PROJECT_SOURCE_INCLUDES
	"Include"
	"Modules"
	"Objects"
	"Parser"
	"Python"
)
if(TARGET_PLATFORM STREQUAL PLATFORM_WIN)
    list(APPEND PROJECT_SOURCE_INCLUDES "PC")
elseif(TARGET_PLATFORM STREQUAL PLATFORM_MAC)
    list(APPEND PROJECT_SOURCE_INCLUDES "Mac")
endif()

list(APPEND PROJECT_SOURCE_EXCLUDES
    "Modules/_blake2"
    "Modules/_ctypes"
	"Modules/clinic"
	"Modules/_curses_panel.c"
	"Modules/_cursesmodule.c"
	"Modules/_dbmmodule.c"
	"Modules/_gdbmmodule.c"
)

# 头文件查找目录
list(APPEND PROJECT_INCLUDE_DIRS
	"Python"
	"Include"
	"Include/internal"
	"PC"
	"Modules/_decimal/libmpdec"
	"Modules/expat"
)

list(APPEND PROJECT_DEFINITIONS
	"Py_BUILD_CORE"
)

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
	list(APPEND PROJECT_DEFINITIONS "CONFIG_64")
else()
	list(APPEND PROJECT_DEFINITIONS "CONFIG_32")
endif()

if(TARGET_PLATFORM EQUAL PLATFORM_WIN)
	list(APPEND PROJECT_DEFINITIONS "MASM")
endif()

list(APPEND PROJECT_DEPENDS bzip2)
list(APPEND PROJECT_DEPEND_EXTERNALS)

project_define(${PROJECT_NAME} ${PROJECT_SOURCE_DIR} "${PROJECT_SOURCE_INCLUDES}" "${PROJECT_SOURCE_EXCLUDES}" "${PROJECT_INCLUDE_DIRS}" "${PROJECT_DEFINITIONS}" "${PROJECT_DEPENDS}" "${PROJECT_DEPEND_EXTERNALS}")