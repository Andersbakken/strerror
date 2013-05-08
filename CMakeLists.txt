cmake_minimum_required(VERSION 2.6)
add_definitions(-DOS_${CMAKE_SYSTEM_NAME})
add_executable(strerror main.c)
