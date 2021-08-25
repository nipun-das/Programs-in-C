//2D array matrix
#include <stdio.h>
void main()
{
    int m, n, i, j;
    printf("Enter the number of rows:\n");
    scanf("%d", &m);
    printf("Enter the number of columns:\n");
    scanf("%d", &n);
    int a[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nEnter the a[%d][%d] element ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}
