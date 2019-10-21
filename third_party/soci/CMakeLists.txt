cmake_minimum_required(VERSION 3.11)

include(FetchContent)

FetchContent_Declare(soci
    GIT_REPOSITORY https://github.com/SOCI/soci
    GIT_TAG master
    GIT_SHALLOW ON)

FetchContent_GetProperties(soci)
if(NOT soci_POPULATED)
  set(SOCI_STATIC ON)
  set(SOCI_SHARED ON)
  set(SOCI_TESTS OFF)
  # set(SOCI_ASAN OFF)
  set(SOCI_CXX11 ON)
  set(SOCI_LIBDIR lib)
  set(WITH_SQLITE3 ON)
  set(WITH_POSTGRESQL ON)
  set(WITH_BOOST OFF)
  set(WITH_DB2 OFF)
  set(WITH_ODBC OFF)
  set(WITH_ORACLE OFF)
  set(WITH_MYSQL OFF)
  set(SOCI_EMPTY OFF)
  FetchContent_Populate(soci)
  add_subdirectory(
    ${soci_SOURCE_DIR}
    ${soci_BINARY_DIR}
    EXCLUDE_FROM_ALL)
endif()
