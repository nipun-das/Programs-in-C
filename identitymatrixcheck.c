//Check whether a matrix is identity matrix or not

#include <stdio.h>
void main()
{
    int ord, i, j, f = 1;
    printf("Enter the order of matirx:\n");
    scanf("%d", &ord);

    int a[ord][ord];
    for (i = 0; i < ord; i++)
    {
        for (j = 0; j < ord; j++)
        {
            printf("Enter the [%d][%d] element:\n", i, j);
            scanf("%d", &a[i][j]);
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
        for (j = 0; j < ord; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                f = 0;
                break;
            }
            if (i != j && a[i][j] != 0)
            {
                f = 0;
                break;
            }
        }
    }
    if (f == 1)
    {
        printf("The matrix is an identity matrix");
    }
    if (f == 0)
    {
        printf("The matrix is not an identity matrix");
    }
}
