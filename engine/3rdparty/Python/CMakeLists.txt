cmake_minimum_required(VERSION 3.21)

project(python)
# python版本选择
set(PYTHON_VERSION "3.11.3" CACHE STRING "Specify Which Python Version Used")
# python 链接方式选择
set(PYTHON_LINK_TYPE STATIC CACHE STRING "Choose Python Link Type: STATIC or SHARED" FORCE)
set_property(CACHE PYTHON_LINK_TYPE PROPERTY STRINGS STATIC SHARED)
# python构建目标平台
set(PLATFORM "WIN32" CACHE STRING "Choose Python Build Platform")

# python源码所在目录
set(PYTHON_SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/Python-${PYTHON_VERSION})

# 收集源码文件通用函数
macro(collect_source_files SOURCE_DIR INCLUDES EXCLUDES OUTPUT)
    set(SOURCE_FILES "")
    file(GLOB_RECURSE FILES ${SOURCE_DIR}/*.cpp ${SOURCE_DIR}/*.h ${SOURCE_DIR}/*.hpp ${SOURCE_DIR}/*.c ${SOURCE_DIR}/*.cc ${SOURCE_DIR}/*.cxx ${SOURCE_DIR}/*.hxx ${SOURCE_DIR}/*.h++)

    foreach(FILE ${FILES})
        # Get the path relative to the source directory
        file(RELATIVE_PATH REL_PATH ${SOURCE_DIR} ${FILE})
        set(FILE_VALID 0)
        
		# filter file which in includes
        foreach(INCLUDE ${INCLUDES})
        	if (REL_PATH MATCHES "^${INCLUDE}")
                set(FILE_VALID 1)
                break()
			endif()
		endforeach()

        if(FILE_VALID EQUAL 1)
            foreach(EXCLUDE ${EXCLUDES})
                if(REL_PATH MATCHES "^${EXCLUDE}")
                	message(STATUS "${EXCLUDE} ${REL_PATH}")
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
list(APPEND PYTHON_SOURCE_INCLUDES
	"Include"
	"Modules"
	"Objects"
	"Parser"
	"Python"
)
if(PLATFORM STREQUAL "WIN32")
    list(APPEND PYTHON_SOURCE_INCLUDES "PC")
elseif(PLATFORM STREQUAL "MAC")
    list(APPEND PYTHON_SOURCE_INCLUDES "Mac")
endif()

list(APPEND PYTHON_SOURCE_EXCLUDES
    "Modules/_blake2"
)

collect_source_files(${PYTHON_SOURCE_DIR} "${PYTHON_SOURCE_INCLUDES}" "${PYTHON_SOURCE_EXCLUDES}" PYTHON_SOURCE_FILES)

# 头文件查找目录
list(APPEND PYTHON_INCLUDE_DIRS "${PYTHON_SOURCE_DIR}/Python" "${PYTHON_SOURCE_DIR}/Include" "${PYTHON_SOURCE_DIR}/Include/internal" "${PYTHON_SOURCE_DIR}/PC")

add_library(python ${PYTHON_LINK_TYPE} ${PYTHON_SOURCE_FILES})
target_include_directories(python PUBLIC ${PYTHON_INCLUDE_DIRS})