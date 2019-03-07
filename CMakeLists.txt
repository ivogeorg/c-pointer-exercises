cmake_minimum_required(VERSION 3.13)
project(c-pointer-exercises C)

set(CMAKE_C_STANDARD 11)

add_executable(c_ptr_ex main.c global_array.c local_array.c monolithic_array.c array_of_pointers.c linked_list.c)
