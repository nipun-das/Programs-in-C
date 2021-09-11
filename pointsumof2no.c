//Sum of two numbers using pointers

#include <stdio.h>
void main()
{
    int n1 = 3, n2 = 4, sum;
    int *p1 = &n1, *p2 = &n2;
    sum = *p1 + *p2;
    printf("\nsum=%d", sum);
}