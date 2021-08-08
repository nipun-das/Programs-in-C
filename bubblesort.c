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
    //If number of elements is n , number of passes is n-1
    
    for (i = 0; i < n - 1; i++) //This for loop for passes
    {
        for (j = 0; j < n - 1 - i; j++) //This for loop for comparing adjacent elements
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];            
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
