//To calculate the number of times an element repeats in an array

#include <stdio.h>
int main()
{
    int c, n, num, i = 0, f = 0;
    printf("Enter the Number of elements in the array:\n");
    scanf("%d", &num);

    int a[num];
    printf("Enter the elements of the array:\n");
    for (c = 0; c < num; c++)
    {
        scanf("%d", &a[c]);
    }
    printf("Enter the Element to check in the array for multiple occ.:\n");
    scanf("%d", &n);
    for (c = 0; c < num; c++)
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
