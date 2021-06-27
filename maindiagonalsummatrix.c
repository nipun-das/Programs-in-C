#include <stdio.h>
void main()
{
    int o, i, j, ds = 0;
    printf("Enter the order of matirx:\n");
    scanf("%d", &o);

    int a[o][o];
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < o; j++)
        {
            printf("Enter the [%d][%d] element:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix you entered is:\n");
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < o; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < o; i++)
    {
        for (j = 0; j < o; j++)
        {
            if (i == j)
            {
                ds += a[i][j];
            }
        }
    }
    printf("Sum of diagonals is: %d\n", ds);
}