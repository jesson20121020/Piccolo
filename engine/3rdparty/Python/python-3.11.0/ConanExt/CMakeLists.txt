cmake_minimum_required(VERSION 3.2)

project(python_ext311)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

if (APPLE AND BUILD_SHARED_LIBS)
	conan_basic_setup(KEEP_RPATHS)
	set(CMAKE_BUILD_WITH_INSTALL_RPATH ON)
	set(CMAKE_INSTALL_NAME_DIR "@rpath")
else()
	conan_basic_setup()
endif()

if (MSVC AND NOT BUILD_SHARED_LIBS)
	foreach(flag_var CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELWITHDEBINFO CMAKE_C_FLAGS_DEBUG CMAKE_C_FLAGS_RELWITHDEBINFO)
		string(REGEX REPLACE "/Z[iI7]" "" ${flag_var} "${${flag_var}}")
		set(${flag_var} "${${flag_var}} /Z7")
	endforeach()
endif()

option(WITH_EXPAT "Expat" ON)
option(WITH_SSL "OpenSSL" ON)
option(WITH_BZ2 "Bzip2" ON)
option(WITH_DECIMAL "Mpdecimal" ON)
option(WITH_SQLITE "Sqlite" ON)

if (MSVC)
	add_definitions("/D_CRT_SECURE_NO_WARNINGS /wd4819 /wd4018 /wd4996 /wd4101 /wd4244 /wd4133")
endif()

include_directories(../Include/internal)

if (WITH_EXPAT)
	add_definitions(-DWITH_EXPAT)
	set(EXPAT_SOURCES
		../Modules/pyexpat.c)
	source_group("expat" FILES ${EXPAT_SOURCES})
endif()

if (WITH_SSL)
	add_definitions(-DWITH_SSL)
	set(SSL_SOURCES
		../Modules/_hashopenssl.c
		../Modules/_ssl.c)
	source_group("ssl" FILES ${SSL_SOURCES})
endif()

if (WITH_BZ2)
	find_package(bzip2)
	add_definitions(-DWITH_BZ2)
	set(BZ2_SOURCES
		../Modules/_bz2module.c)
	source_group("bz2" FILES ${BZ2_SOURCES})
endif()

if (WITH_DECIMAL)
	add_definitions(-DWITH_DECIMAL)
	set(DECIMAL_SOURCES
		../Modules/_decimal/_decimal.c)
	source_group("decimal" FILES ${DECIMAL_SOURCES})
endif()

if (WITH_SQLITE)
	add_definitions(-DWITH_SQLITE)
	set(SQLITE_SOURCES
		../Modules/_sqlite/blob.c
		../Modules/_sqlite/connection.c
		../Modules/_sqlite/cursor.c
		../Modules/_sqlite/microprotocols.c
		../Modules/_sqlite/module.c
		../Modules/_sqlite/prepare_protocol.c
		../Modules/_sqlite/row.c
		../Modules/_sqlite/statement.c
		../Modules/_sqlite/util.c
		)
	source_group("sqlite" FILES ${SQLITE_SOURCES})
endif()

set(SOURCES
	python_ext.c
	${EXPAT_SOURCES}
	${SSL_SOURCES}
	${BZ2_SOURCES}
	${DECIMAL_SOURCES}
	${SQLITE_SOURCES}
)

add_library(${PROJECT_NAME} ${SOURCES})

conan_target_link_libraries(${PROJECT_NAME})

if (BUILD_SHARED_LIBS)
	if (WITH_BZ2)
		if (BZIP2_FOUND)
			target_link_libraries(${PROJECT_NAME} ${BZIP2_LIBRARIES})
		endif()
	endif()
endif()

install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib)

if (WIN32 AND BUILD_SHARED_LIBS)
	install(FILES $<TARGET_PDB_FILE:${PROJECT_NAME}> DESTINATION pdb OPTIONAL)
endif()
