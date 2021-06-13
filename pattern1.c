/*Pattern1*/
/*
for eg.for 5 rows
*
* *
* * *
* * * *
* * * * *

*/
/*Notice that no. of columns printed in each row is equal to row no. */
#include <stdio.h>
void main()
{
    int row, column, no_of_rows;
    printf("Enter the no. of rows: ");
    scanf("%d", &no_of_rows);
    for (row = 1; row <= no_of_rows; row++)
    {
        for (column = 1; column <= row; column++)  \
        {
            printf("* ");
        }
        printf("\n");
    }
}
