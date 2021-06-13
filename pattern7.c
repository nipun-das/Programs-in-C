/*Pattern7*/
/*
for eg.for 5 rows

A
A B
A B C
A B C D
A B C D E
A B C D
A B C
A B
A

*/


#include <stdio.h>
void main()
{
    int ch  = 64;   /*Intialized ASCII 64*/
    int row, column, no_of_rows;
    printf("Enter the no. of rows: ");
    scanf("%d", &no_of_rows);

    for (row = 1; row <= no_of_rows; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%c ", ch + column); /*To start from A, ch + column gives 65*/
        }
        printf("\n");
    }
    for (row = no_of_rows - 1; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%c ", ch + column);
        }
        printf("\n");
    }
}
