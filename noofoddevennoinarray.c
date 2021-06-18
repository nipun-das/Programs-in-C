#include <stdio.h>
void main()
{
    int n, i, e = 0, o = 0;
    printf("Enter the no.of elements:\n ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("Number of Even numbers are %d\n", e);
    printf("Number of Odd numbers are %d", o);
}