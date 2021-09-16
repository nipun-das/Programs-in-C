//Pointer to Pointer

#include <stdio.h>
void main()
{
    int a = 10;
    int *p1;
    int **p2;
    p1 = &a;
    p2 = &p1;
    printf("Address of a = %p\n", &a);
    printf("Address of p1 = %p\n", &p1);
    printf("Address of p2 = %p\n", &p2);
    printf("Value of Address stored by p2 = %p\n", *p2);
    printf("Value of Address stored by p1 = %d\n", *p1);
    printf("Value of **p2 = %d\n", **p2);
}