/*Pattern4*/
/*To display row number*/
/*
for eg.for 5 rows
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include <stdio.h>
void main()
{
    int row, column, no_of_rows;
    printf("Enter the no. of rows: ");
    scanf("%d", &no_of_rows);
    for (row = 1; row <= no_of_rows; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
}