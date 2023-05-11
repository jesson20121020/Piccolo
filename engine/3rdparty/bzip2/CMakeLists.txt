cmake_minimum_required(VERSION 3.21)

project(bzip2)
set(BZIP2_VERSION "1.0.8" CACHE STRING "Specify Which Version Used")
set(LINK_TYPE STATIC CACHE STRING "Choose Link Type: STATIC or SHARED")
set_property(CACHE LINK_TYPE PROPERTY STRINGS STATIC SHARED)
set(PLATFORM "WIN32" CACHE STRING "Choose Build Platform")
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}-${BZIP2_VERSION})
set(${PROJECT_NAME}_include "${PROJECT_SOURCE_DIR}" CACHE STRING "${PROJECT_NAME} include directory")

# 收集源码文件通用函数
macro(collect_source_files SOURCE_DIR INCLUDES EXCLUDES OUTPUT)
    set(SOURCE_FILES "")
    file(GLOB_RECURSE FILES ${SOURCE_DIR}/*.cpp ${SOURCE_DIR}/*.h ${SOURCE_DIR}/*.hpp ${SOURCE_DIR}/*.c ${SOURCE_DIR}/*.cc ${SOURCE_DIR}/*.cxx ${SOURCE_DIR}/*.hxx ${SOURCE_DIR}/*.h++)

    foreach(FILE ${FILES})
        # Get the path relative to the source directory
        file(RELATIVE_PATH REL_PATH ${SOURCE_DIR} ${FILE})
        set(FILE_VALID 1)
		
		list(LENGTH INCLUDE INCLUDES_LENGTH)
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
list(APPEND PROJECT_SOURCE_INCLUDES)

list(APPEND PROJECT_SOURCE_EXCLUDES
	"bzip2recover.c"
	"dlltest.c"
	"mk251.c"
	"spewG.c"
	"unzcrash.c"
)

collect_source_files(${PROJECT_SOURCE_DIR} "${PROJECT_SOURCE_INCLUDES}" "${PROJECT_SOURCE_EXCLUDES}" PROJECT_SOURCE_FILES)

# 头文件查找目录
list(APPEND PROJECT_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}")

add_library(${PROJECT_NAME} ${LINK_TYPE} ${PROJECT_SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_INCLUDE_DIRS})