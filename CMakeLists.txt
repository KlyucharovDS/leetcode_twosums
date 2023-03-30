cmake_minimum_required(VERSION 3.5)

project(two_sum LANGUAGES C)
#set(COMPILE_FLAGS "-std=c89 -Wall -pedantic")
set(CMAKE_C_FLAGS_DEBUG "-std=c99 -Wall -pedantic")
add_executable(two_sum main.c)
