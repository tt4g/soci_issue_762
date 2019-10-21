cmake_minimum_required(VERSION 3.11)

project(soci_issue_762 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(third_party/soci)
add_subdirectory(third_party/spdlog)

add_subdirectory(soci_issue_762)
