set(external_folder "External")

if (NOT TARGET openssl)
add_subdirectory(openssl)
set_target_properties(openssl PROPERTIES FOLDER ${external_folder})
endif()

if (NOT TARGET Qt)
add_subdirectory(Qt)
set_target_properties(Qt PROPERTIES FOLDER ${external_folder})
endif()

if (NOT TARGET libffi)
add_subdirectory(libffi)
set_target_properties(libffi PROPERTIES FOLDER ${external_folder})
endif()