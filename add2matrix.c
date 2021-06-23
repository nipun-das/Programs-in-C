#include <stdio.h>
void main()
{
    int m, n, i, j;
    printf("Enter the no. of rows of matrix:\n");
    scanf("%d", &m);
    printf("Enter the no. of columns of matrix:\n");
    scanf("%d", &n);

    int a[m][n], b[m][n], c[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the a[%d][%d] element:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the b[%d][%d] element:\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe first matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe second matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
    printf("\nThe matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
}