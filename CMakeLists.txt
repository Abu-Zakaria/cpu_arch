cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(cpu_arch)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(src)
add_subdirectory(tests)

target_include_directories(${PROJECT_NAME} PUBLIC src)
target_link_libraries(${PROJECT_NAME} src)
