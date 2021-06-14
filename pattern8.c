/*Pattern8*/
/*
for eg.for 5 rows

A
B C
D E F
G H I J
K L M N O
P Q R S
T U V
W X
Y

*/



#include <stdio.h>
void main()
{
    int ch  = 65;
    int row, column, no_of_rows;
    printf("Enter the no. of rows: ");
    scanf("%d", &no_of_rows);

    for (row = 1; row <= no_of_rows; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    for (row = no_of_rows - 1; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%c ", ch ++);
        }
        printf("\n");
    }
}
