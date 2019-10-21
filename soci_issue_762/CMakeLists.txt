cmake_minimum_required(VERSION 3.11)

add_executable(soci_issue_762 main.cpp)

target_link_libraries(soci_issue_762
  PRIVATE
    spdlog
    SOCI::core)

add_dependencies(soci_issue_762 spdlog SOCI::core)
