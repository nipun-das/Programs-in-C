#include <stdio.h>
void main()
{
    int ord, i, j, rs = 0, cs = 0, ds = 0;
    printf("Enter the order of the square matrix\n");
    scanf("%d", &ord);

    int a[ord][ord], b[ord + 1][ord + 1];
    printf("Enter the Matrix\n");
    printf("\n");
    for (i = 0; i < ord; i++)
    {
        for (j = 0; j < ord; j++)
        {
            printf("Enter the [%d][%d] element:\n", i, j);
            scanf("%d", &a[i][j]);
            b[i][j] = a[i][j];
        }
    }
    printf("The matrix you entered is:\n");
    for (i = 0; i < ord; i++)
    {
        for (j = 0; j < ord; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < ord; i++)
    {
        rs = 0;
        for (j = 0; j < ord; j++)
        {
            rs += a[i][j];
            if (j == ord - 1)
            {
                b[i][j + 1] = rs;
            }
        }

        printf("Sum of    Row %d is: %d\n", (i + 1), rs);
    }
    for (j = 0; j < ord; j++)
    {
        cs = 0;
        for (i = 0; i < ord; i++)
        {
            cs += a[i][j];
            if (i == ord - 1)
            {
                b[i + 1][j] = cs;
            }
        }
        printf("Sum of Column %d is: %d\n", (j + 1), cs);
    }
    for (i = 0; i < ord; i++)
    {
        for (j = 0; j < ord; j++)
        {
            if (i == j)
            {
                ds += a[i][j];
            }
            if (i == (ord - 1) && j == (ord - 1))
            {
                b[i + 1][j + 1] = ds;
            }
        }
    }
    printf("Sum of diagonals is: %d\n", ds);

    printf("\nThe final matrix is:\n");
    for (i = 0; i < ord + 1; i++)
    {
        for (j = 0; j < ord + 1; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
}