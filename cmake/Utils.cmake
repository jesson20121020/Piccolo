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

macro(project_define project_name source_dir source_includes source_excludes include_dirs definitions depend_projects depend_externals)
	message(STATUS "Config project_name=${project_name} source_dir=${source_dir} source_includes=${source_includes} source_excludes=${source_excludes} include_dirs=${include_dirs} definitions=${definitions} depend_projects=${depend_projects} depend_externals=${depend_externals}")
	# define project
	project(${project_name})
	

	# collect source files
	set(PROJECT_SOURCE_FILES)
	collect_source_files(${source_dir} "${source_includes}" "${source_excludes}" PROJECT_SOURCE_FILES)

	# add additonal include directory
	set(PROJECT_INCLUDE_DIRS)
	foreach(include_dir ${include_dirs})
		list(APPEND PROJECT_INCLUDE_DIRS "${source_dir}/${include_dir}")
		list(APPEND additional_includes "${source_dir}/${include_dir}")
	endforeach()
	string(LENGTH "${include_dirs}" include_dirs_length)
	if (include_dirs_length EQUAL 0)
		list(APPEND additional_includes "${source_dir}")
	endif()
	set(${project_name}_includes "${additional_includes}" CACHE STRING "${project_name} Include Find Directory")

	# add depend other project include directory
	foreach(depend_project ${depend_projects})
		list(APPEND PROJECT_INCLUDE_DIRS "${${depend_project}_includes}")
	endforeach()
	# add depend other exteranl include directory
	foreach(depend_external ${depend_externals})
		list(APPEND PROJECT_INCLUDE_DIRS "${${exteranl}_include}")
	endforeach()
	
	foreach(definition ${definitions})
		add_definitions(${definitions})
	endforeach()

	add_library(${PROJECT_NAME} ${LINK_TYPE} ${PROJECT_SOURCE_FILES})
	target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_INCLUDE_DIRS})
	target_link_libraries(${PROJECT_NAME} LINK_PUBLIC ${depend_projects})
endmacro()