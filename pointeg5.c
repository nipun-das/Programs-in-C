//Smallest of an integer array

#include <stdio.h>
void main()
{
    int a[20], n, i, small, pos = 0;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
        small = *a; //small = a[0]
    }
    for (i = 0; i < n; i++)
    {
        if (*(a + i) < small)
        {
            small = *(a + i); //small = a[i]
            pos = i + 1;
        }
    }
    printf("Smallest element is %d at %d position \n", small, pos);
}
