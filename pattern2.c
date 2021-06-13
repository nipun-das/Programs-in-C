/*Pattern2*/
/*
for eg.for 5 rows
* * * * *
* * * *
* * *
* *
* 

*/

#include <stdio.h>
void main()
{
    int row, column, no_of_rows;
    printf("Enter the no. of rows: ");
    scanf("%d", &no_of_rows);
    
    /*Below comment is the for loop for pattern1.c*/
    
    /*for (row = 1; row <= no_of_rows; row++)          
    {
        for (column = 1; column <= row; column++)
        {
            printf("* ");
        }
    printf("\n");*/  
    
    /*Notice the changes that I have made to reverse the pattern*/
    for (row = no_of_rows; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
