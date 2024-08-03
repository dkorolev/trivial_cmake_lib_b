cmake_minimum_required(VERSION 3.14.1)

project(trivial_cmake_lib_b C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(trivial_cmake_lib)

add_library(trivial_cmake_lib_b src/trivial_cmake_lib_b.cc)
target_link_libraries(trivial_cmake_lib_b trivial_cmake_lib)
target_include_directories(trivial_cmake_lib_b PUBLIC ${PROJECT_SOURCE_DIR}/src)
