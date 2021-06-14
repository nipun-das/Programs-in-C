/*Pattern9

01
02 03
04 05 06
07 08 09 10
11 12 13 14 15
16 17 18 19
20 21 22
23 24
25

Notice the changes made to display them with 2 character spaces
*/

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
            printf("%02d ", a++);   // %02d makes characters print with 2 character spaces and if there are no 2 character spaces, includes a 0 with it .
        }
        printf("\n");
    }
    for (row = no_of_rows - 1; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%02d ", a++);
        }
        printf("\n");
    }
}


/*Note: if %2d instead of %02d is written, output will be

 1 
 2  3
 4  5  6
 7  8  9 10
11 12 13 14 15
16 17 18 19
20 21 22
23 24
25

*/
  
