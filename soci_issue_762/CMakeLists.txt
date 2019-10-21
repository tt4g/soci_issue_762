cmake_minimum_required(VERSION 3.11)

add_executable(soci_issue_762 main.cpp)

target_link_libraries(soci_issue_762
  PRIVATE
    spdlog
    ${SOCI_EMPTY_LIBRARY}
    ${SOCI_CORE_LIBRARY})

target_include_directories(soci_issue_762
  PRIVATE
    ${SOCI_INCLUDE_DIRECTORY})

add_dependencies(soci_issue_762 spdlog)
