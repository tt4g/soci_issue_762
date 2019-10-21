cmake_minimum_required(VERSION 3.11)

set(SOCI_OPTIONS "-DSOCI_STATIC=ON -DSOCI_SHARED=ON -DSOCI_TESTS=OFF \
-DSOCI_CXX11=ON -DSOCI_LIBDIR=lib -DSOCI_EMPTY=OFF -DWITH_SQLITE3=OFF \
-DWITH_POSTGRESQL=OFF -DWITH_BOOST=OFF -DWITH_DB2=OFF -DWITH_ODBC=OFF \
-DWITH_ORACLE=OFF -DWITH_MYSQL=OFF")

configure_file(CMakeLists.txt.in soci-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" . ${SOCI_OPTIONS}
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/soci-download)
if(result)
  message(FATAL_ERROR "CMake step for soci failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/soci-download)
if(result)
  message(FATAL_ERROR "Build step for soci failed: ${result}")
endif()

add_subdirectory("${CMAKE_CURRENT_BINARY_DIR}/soci-src"
                 "${CMAKE_CURRENT_BINARY_DIR}/soci-build"
                 EXCLUDE_FROM_ALL)
