cmake_minimum_required(VERSION 3.20)
project(extractlcs C)

set(CMAKE_C_STANDARD 11)

add_executable(extractlcs main.c readAndWrite.c longestCommonSubsequence.c)
