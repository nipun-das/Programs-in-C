#include <stdio.h>
void main()
{
    int m, i, n, count = 0;

    printf("Enter the no. of elements: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter the elements: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to search for: ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        if (a[i] == n)
        {
            printf("Your number %d is at location %d", n, i);
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("Your Number %d is not found", n);
    }
}
