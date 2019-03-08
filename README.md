# C Pointer Exercises

In-class C pointer exercises. If not finished, will be due as homework.

## Arrays

### Static arrays

#### Global array
1. Define a structure.
2. Declare a *static* array of structures, outside of any function. What is the type of the array variable?
3. Sketch the array on the worksheet.
3. Assign values in a loop.
4. Step through the code with the debugger.

#### Local array
1. Define a structure.
2. Declare a *static* array of structures, inside a function. What is the type of the array variable?
3. Sketch the array on the worksheet.
3. Assign values in a loop.
4. Step through the code with the debugger.

##### Sketch

![Static array (global or local)](/images/static_array.jpg)

### Dynamic arrays

#### Monolithic array
1. Define a structure.
2. Allocate a *dynamic* array of structures. What is the type of the array variable?
3. Sketch the array on the worksheet.
3. Assign values in a loop.
4. Free all dynamic memory.
5. Step through the code with the debugger.

##### Sketch

![Static array (global or local)](/images/dynamic_monolithic_array.jpg)

#### Array of pointers
1. Define a structure.
2. Allocate a *dynamic* array of **pointers** to structures. What is the type of the array variable?
3. Sketch the array on the worksheet.
3. Assign values in a loop.
4. Free all dynamic memory. Mind the order to avoid leaving dangling pointers!
5. Step through the code with the debugger.

##### Sketch

![Static array (global or local)](/images/dynamic_array_of_pointers.jpg)

## Linked lists
1. Declare a node structure for a singly-linked list, holding a single `int` value.
2. Declare the list's `head` and `tail` pointers.
3. Initialize the linked list. What does an *empty* list look like?
4. Reason out the different assignment cases for the `list_insert` function. The nodes have to be inserted *in ascending order*. How should the pointer member of the node structure be initialized by default?
5. Implement the `list_insert` function, for all cases you came up with.
6. Test the function for all the cases. Run in the debugger to see if it works. Correct it.