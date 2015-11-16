cmake_minimum_required(VERSION 3.3)
project(TestC)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -Wall -Werror -Werror=implicit -Werror=uninitialized -O")

set(SOURCE_FILES hello.c whitespace.c)
add_executable(TestC ${SOURCE_FILES})