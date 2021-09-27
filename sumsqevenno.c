//Find sum of squares of even numbers in an array

#include <stdio.h>
void main()
{
    int n, a[n], i = 0, sumsq = 0;
    printf("Enter the no. of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sumsq += a[i] * a[i];
        }
    }
    printf("The sum of the squares of numbers entered is %d\n", sumsq);
}
