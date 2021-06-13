/*Pattern3*/
/*For displaying both row number and column number as elements in the pattern*/

/*
for eg.for 5 rows
11 
21 22
31 32 33
41 42 43 44
51 52 53 54 55
41 42 43 44
31 32 33
21 22
11

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
            printf("%d%d ", row, column);
        }
        printf("\n");
    }
    for (row = no_of_rows - 1; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%d%d ", row, column);
        }
        printf("\n");
    }
}
