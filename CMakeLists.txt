cmake_minimum_required(VERSION 3.6)
project(git_workshop)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(git_workshop ${SOURCE_FILES})