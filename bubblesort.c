#include <stdio.h>
int main()
{
    int i, j, n, temp;
    printf("Enter the Number of elements:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
