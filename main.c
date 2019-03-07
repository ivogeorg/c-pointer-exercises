//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

// forward declarations
void run_global_array();
void run_local_array();
void run_monolithic_array();
void run_array_of_pointers();
void run_linked_list();

int main() {
    printf("C Pointer Exercises\n");

    run_global_array();
    run_local_array();
    run_monolithic_array();
    run_array_of_pointers();
    run_linked_list();

    return 0;
}