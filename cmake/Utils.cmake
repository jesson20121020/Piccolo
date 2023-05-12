# 收集源码文件通用函数
macro(collect_source_files SOURCE_DIR INCLUDES EXCLUDES OUTPUT)
    set(SOURCE_FILES "")
    file(GLOB_RECURSE FILES ${SOURCE_DIR}/*)

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
				string(FIND "${REL_PATH}" "_scproxy" _index)
				if(${_index} GREATER -1)
					message(STATUS "${REL_PATH} ${EXCLUDE}")
				endif()
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

macro(project_begin)
endmacro()

macro(project_name name)
	# define project
	project(${name})
endmacro()

macro(project_version version)
	set(${PROJECT_NAME}_VERSION ${version})
endmacro()

macro(project_type type)
	message(STATUS "project_type=${type}")
	set(PROJECT_TYPE ${type})
endmacro()

macro(project_source_dir source_dir)
	set(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/${source_dir}")
endmacro()

macro(project_add_source_inclues)
	foreach(include ${ARGN})
		list(APPEND PROJECT_SOURCE_INCLUDES ${include})
	endforeach()
endmacro()

macro(project_add_source_excludes)
	foreach(exclude ${ARGN})
		list(APPEND PROJECT_SOURCE_EXCLUDES ${exclude})
	endforeach()
endmacro()

macro(project_add_include_dirs)
	foreach(include ${ARGN})
		list(APPEND PROJECT_INCLUDE_DIRS ${include})
	endforeach()
endmacro()

macro(project_add_definitions)
	foreach(definition ${ARGN})
		list(APPEND PROJECT_DEFINITIONS ${definition})
	endforeach()
endmacro()

macro(project_add_depends)
	foreach(depend ${ARGN})
		list(APPEND PROJECT_DEPENDS ${depend})
	endforeach()
endmacro()

macro(project_add_depend_externals)
	foreach(external ${ARGN})
		list(APPEND PROJECT_DEPEND_EXTERNALS ${external})
	endforeach()
endmacro()

macro(project_add_precompiled_libs)
	foreach(lib ${ARGN})
		list(APPEND PROJECT_PRECOMPILED_LIBS ${lib})
	endforeach()
endmacro()

macro(project_add_precompiled_bins)
	foreach(bin ${ARGN})
		list(APPEND PROJECT_PRECOMPILED_BINS ${bin})
	endforeach()
endmacro()

macro(project_end)
	message(STATUS "Config ${PROJECT_NAME}")
	# collect source files
	set(source_files)
	collect_source_files(${PROJECT_SOURCE_DIR} "${PROJECT_SOURCE_INCLUDES}" "${PROJECT_SOURCE_EXCLUDES}" source_files)

	# add additonal include directory
	set(additional_includes)
	foreach(include_dir ${PROJECT_INCLUDE_DIRS})
		list(APPEND additional_includes "${PROJECT_SOURCE_DIR}/${include_dir}")
	endforeach()
	string(LENGTH "${PROJECT_INCLUDE_DIRS}" include_dirs_length)
	if (include_dirs_length EQUAL 0)
		if (PROJECT_TYPE STREQUAL PROJECT_TYPE_PRECOMPILED)
			list(APPEND additional_includes "${PROJECT_SOURCE_DIR}/Include")
			list(APPEND additional_includes "${PROJECT_SOURCE_DIR}/Include/${TARGET_PLATFORM}/${TARGET_PLATFORM_ARCH}")
		else()
			list(APPEND additional_includes "${PROJECT_SOURCE_DIR}")
		endif()
	endif()
	set(${PROJECT_NAME}_includes "${additional_includes}" CACHE STRING "${PROJECT_NAME} Include Find Directory")

	# add depend other project include directory
	foreach(depend_project ${PROJECT_DEPENDS})
		list(APPEND additional_includes "${${depend_project}_includes}")
	endforeach()
	# add depend other exteranl include directory
	foreach(depend_external ${PROJECT_DEPEND_EXTERNALS})
		list(APPEND additional_includes "${${depend_external}_includes}")
	endforeach()
	
	foreach(definition ${PROJECT_DEFINITIONS})
		add_definitions("-D${definition}")
	endforeach()
	
	# set link libs
	if (PROJECT_TYPE STREQUAL PROJECT_TYPE_PRECOMPILED)
		foreach(lib ${PROJECT_PRECOMPILED_LIBS})
			list(APPEND link_libs "${PROJECT_SOURCE_DIR}/${lib}")
		endforeach()
		string(LENGTH "${PROJECT_PRECOMPILED_LIBS}" libs_length)
		if(libs_length EQUAL 0)
	    	file(GLOB_RECURSE FILES ${PROJECT_SOURCE_DIR}/Lib/${TARGET_PLATFORM}/${TARGET_PLATFORM_ARCH}/*)
			foreach(file ${FILES})
				list(APPEND link_libs "${file}")
			endforeach()
		endif()
		set(${PROJECT_NAME}_libs "${link_libs}" CACHE STRING "${PROJECT_NAME} Libs")
		
		# set copy bins
		foreach(bin ${PROJECT_PRECOMPILED_BINS})
			list(APPEND copy_bins "${PROJECT_SOURCE_DIR}/${bin}")
		endforeach()
		string(LENGTH "${PROJECT_PRECOMPILED_BINS}" bins_length)
		if(bins_length EQUAL 0)
	    	file(GLOB_RECURSE FILES ${PROJECT_SOURCE_DIR}/Bin/${TARGET_PLATFORM}/${TARGET_PLATFORM_ARCH}/*)
			foreach(file ${FILES})
				list(APPEND copy_bins "${file}")
			endforeach()
		endif()
		add_custom_target(${PROJECT_NAME} SOURCES ${source_files})
	else()
		add_library(${PROJECT_NAME} ${LINK_TYPE} ${source_files})
		target_include_directories(${PROJECT_NAME} PUBLIC ${additional_includes})
		target_link_libraries(${PROJECT_NAME} LINK_PUBLIC ${PROJECT_DEPENDS})
	endif()
endmacro()