//Implement a C program to read positive numbers into an array.
//The program should stop reading the input when the user enters a negative number.
//The program should display the original array in the reverse order.

#include <stdio.h>
int main()
{
    int n, i, j, a[100];
    printf("Enter the elements of the array:\n");
    for (i = 0;; i++)
    {
        scanf("%d", &n);
        if (n >= 0)
        {
            a[i] = n;
        }
        else
        {
            break;
        }
    }
    printf("The array is:\n");
    for (j = 0; j < i; j++)
    {
        printf("%d\t", a[j]);
    }
    printf("\nThe reversed array is:\n");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d\t", a[j]);
    }
}