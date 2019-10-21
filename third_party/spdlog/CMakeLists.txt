cmake_minimum_required(VERSION 3.11)

include(FetchContent)

FetchContent_Declare(spdlog
  GIT_REPOSITORY https://github.com/gabime/spdlog
  GIT_TAG v1.4.2
  GIT_SHALLOW ON)

FetchContent_GetProperties(spdlog)
if(NOT spdlog_POPULATED)
  set(SPDLOG_BUILD_EXAMPLE OFF)
  set(SPDLOG_BUILD_EXAMPLE_HO OFF)
  set(SPDLOG_BUILD_TESTS OFF)
  set(SPDLOG_BUILD_TESTS_HO OFF)
  set(SPDLOG_BUILD_BENCH OFF)
  set(SPDLOG_SANITIZE_ADDRESS OFF)
  set(SPDLOG_INSTALL ON)
  set(SPDLOG_FMT_EXTERNAL OFF)
  FetchContent_Populate(spdlog)
  add_subdirectory(
    ${spdlog_SOURCE_DIR}
    ${spdlog_BINARY_DIR}
    EXCLUDE_FROM_ALL)
endif()
