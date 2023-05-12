set(external_folder "Externals")

if (NOT TARGET openssl)
add_subdirectory(openssl)
set_target_properties(openssl PROPERTIES FOLDER ${external_folder})
endif()