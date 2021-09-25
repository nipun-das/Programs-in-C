// Implement a menu driven program to do the following using pointers
// i. Add two numbers
// ii. Swap two numbers using a user defined function

#include <stdio.h>
void add(int *p, int *q);
void swap(int *p, int *q);
void main()
{
    int a, b, c;
    do
    {
        printf("\nEnter which operation you want to perform :\n1: Find Sum\n2: Swap Numbers\n3: Exit \n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("\nEnter two Numbers: ");
            scanf("%d %d", &a, &b);
            add(&a, &b);
            break;

        case 2:
            printf("\nEnter two Numbers: ");
            scanf("%d %d", &a, &b);
            swap(&a, &b);
            break;

        case 3:
            break;

        default:
            printf("\nError\n");
            break;
        }

    } while (c != 3);
}
void add(int *p, int *q)
{
    int sum;
    sum = *p + *q;
    printf("\nSum Of The Numbers = %d\n", sum);
}

void swap(int *p, int *q)
{
    int temp;
    printf("\nBefore Swapping: %d\t%d\n", *p, *q);
    temp = *q;
    *q = *p;
    *p = temp;
    printf("\nAfter Swapping:  %d\t%d\n", *p, *q);
}
