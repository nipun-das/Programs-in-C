#include <stdio.h>
int main()
{
    int a[10], i = 0, f = 0;
    int c, n;
    printf("Enter the elements of the array: ");
    for (c = 0; c < 10; c++)
    {
        scanf("%d", &a[c]);
    }
    printf("Enter the Element to check in the array for multiple occ. : ");
    scanf("%d", &n);
    for (c = 0; c < 10; c++)
    {
        if (a[c] == n)
        {
            i = i + 1;
            f = 1;
        }
    }
    if (f == 1)
    {
        printf("%d is occuring %d times ", n, i);
    }
    else
    {
        printf("%d is not found in the array", n);
    }
}