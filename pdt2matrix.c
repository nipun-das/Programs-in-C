#include <stdio.h>
void main()
{
    int m, n, i, j, p, q, k;
    printf("Enter the no. of rows of first matrix:\n");
    scanf("%d", &m);
    printf("Enter the no. of columns of first matrix:\n");
    scanf("%d", &n);
    printf("Enter the no. of rows of second matrix:\n");
    scanf("%d", &p);
    printf("Enter the no. of columns of second matrix:\n");
    scanf("%d", &q);

    if (n != p)
    {
        printf("Matrix multiplication is not possible");
    }
    else
    {
        int a[m][n], b[p][q], c[m][q];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter the a[%d][%d] element:\n", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("Enter the b[%d][%d] element:\n", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        printf("The first matrix is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("\t%d", a[i][j]);
            }
            printf("\n");
        }
        printf("The second matrix is:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("\t%d", b[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("The product matrix is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("\t%d", c[i][j]);
            }
            printf("\n");
        }
    }
}