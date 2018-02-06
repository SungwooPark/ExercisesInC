/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int var1;

int main ()
{
    int var2 = 5;
    int var3 = 5;
    void *p = malloc(128);
    void *q = malloc(128);
    char *s = "Literal string";

    void *a = malloc(17);
    void *b = malloc(17);

    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);
    printf ("Address of p is %p\n", p);
    printf ("Address of s is %p\n", s);
    printf ("Address of q is %p\n", q);
    printf ("Address of var3 is %p\n", &var3);

    printf ("a: %p\n", a);
    printf ("b: %p\n", b);

    return 0;
}
