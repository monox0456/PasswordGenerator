cmake_minimum_required(VERSION 3.20)
project(password_degen)

set(CMAKE_CXX_STANDARD 14)

add_executable(password_degen main.cpp pw_generation.cpp pw_generation.h)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")
