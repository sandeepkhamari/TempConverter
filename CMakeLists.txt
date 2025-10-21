cmake_minimum_required(VERSION 3.15)
project(TempConverter VERSION 1.0)

add_subdirectory(src)
add_subdirectory(test)

# enable testing
enable_testing()
include(CTest)
