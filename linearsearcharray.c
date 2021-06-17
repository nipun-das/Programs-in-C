#include <stdio.h>
void main()
{
    int a[10], i, n;
    printf("Enter the elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to search for: ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            printf("Your number %d is at location %d", n, i);
            break;
        }
    }
    if (i == 10)
    {
        printf("Your Number %d is not found", n);
    }
}