#include <stdio.h>
void main()
{
    int row, column, no_of_rows;
    printf("Enter the no. of rows: ");
    scanf("%d", &no_of_rows);
    
    /*Combining pattern1 and pattern2 and making small changes gives me this pattern*/

    for (row = 1; row <= no_of_rows; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (row = no_of_rows - 1; row >= 1; row--) /*Notice that I have started from no_of_rows-1 because without that intialization, the pattern looks unsymmetrical at the centre row*/
    {
        for (column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
