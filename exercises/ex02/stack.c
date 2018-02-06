/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE];

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = 42;
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE];

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    bar();

    for (i=0; i<SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

/*
 * You get a segmentation fault because you are returning an address to data in stack, which can be moved around the stack during the program's execution. A certain piece of data can be pushed down to lower address when there is new data pushed to a stack. It can be moved up if there are some data being popped from the stack. We see an example of this through the print statement experiment. Even though the two print statements are supposed to display an address of two different data, the address displayed is identical. This is a sign that data in the stack is being moved around. */
