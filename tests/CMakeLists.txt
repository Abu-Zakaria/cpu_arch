include_directories(${CPU_ARCH_SOURCE_DIR}/src)
add_executable(Test test.cpp)

target_link_libraries(Test src)