cmake_minimum_required(VERSION 3.13)
project(web C)

set(CMAKE_C_STANDARD 99)

#add_executable(web main.c server.c server.h)
#add_executable(web server.c server.h)
add_executable(web db.c)