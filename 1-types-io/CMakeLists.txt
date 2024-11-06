cmake_minimum_required(VERSION 3.29)
project(untitled C)

set(CMAKE_C_STANDARD 17)

add_executable(circle circle.c)
add_executable(sphere sphere.c)
add_executable(mol mol.c)
add_executable(admin admin.c)
target_link_libraries(sphere m)
add_executable(new Guess-the-number.c)
add_executable(test test.c)
add_executable(TEST2 TEST2.c)