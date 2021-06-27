#include <stdio.h>
void main()
{
    int m, n, i, j, rs = 0, cs = 0;
    printf("Enter the number of rows:\n");
    scanf("%d", &m);
    printf("Enter the number of columns:\n");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter the Matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the [%d][%d] element:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix you entered is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        rs = 0;
        for (j = 0; j < n; j++)
        {
            rs += a[i][j];
        }
        printf("Sum of    Row %d is: %d\n", (i + 1), rs);
    }
    for (j = 0; j < n; j++)
    {
        cs = 0;
        for (i = 0; i < m; i++)
        {
            cs += a[i][j];
        }
        printf("Sum of Column %d is: %d\n", (j + 1), cs);
    }
}