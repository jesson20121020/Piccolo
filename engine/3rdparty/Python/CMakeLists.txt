cmake_minimum_required(VERSION 3.21)

project(python)
# python版本选择
set(PYTHON_VERSION "3.11.3" CACHE STRING "Specify Which Python Version Used")
# python 链接方式选择
set(LINK_TYPE STATIC CACHE STRING "Choose Python Link Type: STATIC or SHARED" FORCE)
set_property(CACHE LINK_TYPE PROPERTY STRINGS STATIC SHARED)
# python构建目标平台
set(PLATFORM "WIN32" CACHE STRING "Choose Python Build Platform")

# python源码所在目录
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/Python-${PYTHON_VERSION})

# 收集源码文件通用函数
macro(collect_source_files SOURCE_DIR INCLUDES EXCLUDES OUTPUT)
    set(SOURCE_FILES "")
    file(GLOB_RECURSE FILES ${SOURCE_DIR}/*.cpp ${SOURCE_DIR}/*.h ${SOURCE_DIR}/*.hpp ${SOURCE_DIR}/*.c ${SOURCE_DIR}/*.cc ${SOURCE_DIR}/*.cxx ${SOURCE_DIR}/*.hxx ${SOURCE_DIR}/*.h++)

    foreach(FILE ${FILES})
        # Get the path relative to the source directory
        file(RELATIVE_PATH REL_PATH ${SOURCE_DIR} ${FILE})
        set(FILE_VALID 1)
		
		string(LENGTH "${INCLUDES}" INCLUDES_LENGTH)
		# filter file which in includes
		if (INCLUDES_LENGTH GREATER 0)
        	set(FILE_VALID 0)
        	foreach(INCLUDE ${INCLUDES})
        		if (REL_PATH MATCHES "^${INCLUDE}")
        	        set(FILE_VALID 1)
        	        break()
				endif()
			endforeach()
		endif()

        if(FILE_VALID EQUAL 1)
            foreach(EXCLUDE ${EXCLUDES})
                if(REL_PATH MATCHES "^${EXCLUDE}")
                    set(FILE_VALID 0)
                    break()
				endif()
			endforeach()
		endif()
		
        if(FILE_VALID EQUAL 1)
        	# Get the directory of the source file
        	get_filename_component(DIR ${REL_PATH} DIRECTORY)
        	# Create the source group
        	source_group(${DIR} FILES ${FILE})
        	# Append the file to the global SOURCE_FILES variable
        	list(APPEND SOURCE_FILES ${FILE})
		endif()
    endforeach()
    
	list(APPEND ${OUTPUT} ${SOURCE_FILES})
endmacro()

# 根据平台指定源码目录包含列表
list(APPEND PROJECT_SOURCE_INCLUDES
	"Include"
	"Modules"
	"Objects"
	"Parser"
	"Python"
)
if(PLATFORM STREQUAL "WIN32")
    list(APPEND PROJECT_SOURCE_INCLUDES "PC")
elseif(PLATFORM STREQUAL "MAC")
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

collect_source_files(${PROJECT_SOURCE_DIR} "${PROJECT_SOURCE_INCLUDES}" "${PROJECT_SOURCE_EXCLUDES}" PROJECT_SOURCE_FILES)

# 头文件查找目录
list(APPEND PROJECT_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/Python" "${PROJECT_SOURCE_DIR}/Include" "${PROJECT_SOURCE_DIR}/Include/internal" "${PROJECT_SOURCE_DIR}/PC" "${PROJECT_SOURCE_DIR}/Modules/_decimal/libmpdec" ${PROJECT_SOURCE_DIR}/Modules/expat)
list(APPEND PROJECT_INCLUDE_DIRS "${bzip2_include}")
message(STATUS ${PROJECT_INCLUDE_DIRS})

add_definitions("-DPy_BUILD_CORE")

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
	add_definitions("-DCONFIG_64")
else()
	add_definitions("-DCONFIG_32")
endif()

if(MSVC)
	add_definitions("-DMASM")
endif()


add_library(${PROJECT_NAME} ${LINK_TYPE} ${PROJECT_SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_INCLUDE_DIRS})