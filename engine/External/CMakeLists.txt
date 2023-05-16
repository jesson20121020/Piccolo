set(external_folder "External")

if (NOT TARGET openssl)
add_subdirectory(openssl)
set_target_properties(openssl PROPERTIES FOLDER ${external_folder})
endif()