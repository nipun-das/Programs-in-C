#include <stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter the number of elements of the first array:\n");
    scanf("%d", &m);
    int a[m];
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    //
    printf("Enter the number of elements of the second array:\n");
    scanf("%d", &n);
    int b[n];
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    //
    int z[m + n];
    for (i = 0; i < m; i++)
    {
        z[i] = a[i];
    }
    for (i = 0, j = m; i < n; i++, j++)
    {
        z[j] = b[i];
    }
    printf("The concatenated array is: ");
    for (i = 0; i < m + n; i++)
    {
        printf("%d\t", z[i]);
    }
}
