// Implement a menu driven program to do the following using pointers
// i. Print the elements of an array
// ii. Sum of the elements stored in an array

#include <stdio.h>
void main()
{
    int c, s, i, a[20], sum = 0;
    do
    {
        printf("\nEnter which operation you want to perform :\n1: Display the elements of the array\n2: Find the sum of elements in the array\n3.Exit\n");
        scanf("%d", &c);

        if (c == 1 || c == 2)
        {
            printf("\nEnter the array size: ");
            scanf("%d", &s);
            printf("\nEnter the array values: ");
            for (i = 0; i < s; i++)
            {
                scanf("%d", a + i);
            }
        }
        switch (c)
        {
        case 1:
            printf("\nArray values are: ");
            for (i = 0; i < s; i++)
            {
                printf("%d ", *(a + i));
            }
            break;
        case 2:
            for (i = 0; i < s; i++)
            {
                sum = sum + *(a + i);
            }
            printf("\nSum of array values is: %d", sum);
            break;

        case 3:
            break;

        default:
            printf("\nERROR\n");
        }

    } while (c != 3);
}
