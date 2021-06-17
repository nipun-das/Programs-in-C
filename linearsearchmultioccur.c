#include <stdio.h>
void main()
{
    int n, a[10], i = 0, f = 0;
    printf("Enter the elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search for: ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        f=0;
        if (a[i] == n)
        {
        f = 1;
        printf("Your Number %d is at location %d\n", n, i);
        
        }
    }
    if (f == 0)
    {
        printf("Your Number %d is not found", n);
    }
}
