#include <stdio.h>
void main()
{
    int e, n, i, p, j;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &p);

    if (p <= 0 || p > n + 1)
    {
        printf("Invalid position!\n");
    }
    else
    {
        printf("Deleted element:");
        printf("%d", a[p - 1]);
        //Shifting elements to the right of position
        for (i = p - 1; i < n - 1; i++) //n-1
        {
            a[i] = a[i + 1];
        }

        n--; //Shifting caused size of array to deacrease by one.

        printf("\nNew array: ");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
    }
}
