cmake_minimum_required(VERSION 3.21)
project(C C)

set(CMAKE_C_STANDARD 11)

add_executable(C
        crash-course/01-vars/vars.c
        crash-course/02-input/input.c
        crash-course/03-condition/condition.c
        crash-course/04-loop/loop.c
        crash-course/05-switch/switch.c
        crash-course/06-goto/goto.c
        crash-course/07-recursive/recursive.c
        exercise/semester-1/week-2/prime-number/index.c
        exercise/semester-1/week-2/trapezoid/index.c
        exercise/semester-1/week-2/triangle/index.c
        exercise/semester-1/week-3/1/1.c
        exercise/semester-1/week-3/2/2.c
        exercise/semester-1/week-3/3/3.c
        exercise/semester-1/week-3/4/4.c
        exercise/semester-1/week-3/5/5.c
        exercise/semester-1/week-4/1/1.c
        exercise/semester-1/week-4/2/2.c
        exercise/semester-1/week-4/3/3.c
        exercise/semester-1/week-4/4/4.c
        exercise/semester-1/week-4/5/1.c
        exercise/semester-1/week-5/1/1.c
        exercise/semester-1/week-5/2/2.c
        exercise/semester-1/week-5/3/3.c)
