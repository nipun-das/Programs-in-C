#include <stdio.h>
void main()
{
    int a=1;
    int row, column, no_of_rows;
    printf("Enter the no. of rows: ");
    scanf("%d", &no_of_rows);

    for (row = 1; row <= no_of_rows; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%d ", a++);
        }
        printf("\n");
    }
    for (row = no_of_rows - 1; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%d ", a++);
        }
        printf("\n");
    }
}
