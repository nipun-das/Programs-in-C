//Read two matrices from the user ,then find the sum of first matrix with transpose of second matrix

#include <stdio.h>
void main()
{
    int m, n, i, j;
    printf("Enter the no. of rows of matrix:\n");
    scanf("%d", &m);
    printf("Enter the no. of columns of matrix:\n");
    scanf("%d", &n);

    int a[m][n], b[m][n], c[n][m],d[m][n];
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
    
    printf("\nThe first matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            c[i][j] = b[j][i];
        }
    }
    printf("\nThe transpose of the second matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            d[i][j] = a[i][j] + c[i][j];
        }
    }
    printf("\nFinal matrix is:\n ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", d[i][j]);
        }
        printf("\n");
    }
}