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
    printf("Enter the element to be inserted: ");
    scanf("%d", &e);
    printf("Enter the position: ");
    scanf("%d", &p);
    if (p <= 0 || p > n + 1)
    {
        printf("Invalid position!");
    }
    else
    {
        //Shifting elements to the right of position
        for (i = n - 1; i >= p - 1; i--)
        {
            a[i + 1] = a[i];
        }

        //Inserting element
        a[p - 1] = e;
        n++;                    //Shifting caused size of array to increase by one.

        for (i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
    }
}
