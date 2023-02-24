cmake_minimum_required(VERSION 3.23)
project(PRFAssignment_main C)

set(CMAKE_C_STANDARD 11)

add_executable(PRFAssignment_main
        options/option1.c
        options/option2.c
        options/option3.c
        options/option4.c
        options/option5.c
        options/option6.c
        main.c)
