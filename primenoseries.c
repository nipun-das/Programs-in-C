/*Print series of Prime Numbers between two limits*/

#include <stdio.h>
void main()
{
    int n, l, u, i, j, f = 1;
    printf("Enter the lower limit: ");
    scanf("%d", &l);
    printf("Enter the upper limit: ");
    scanf("%d", &u);
    for (i = l + 1; i <= u - 1; i++)      /*Since prime numbers between two limits is to printed, setting i = l + 1 and i <= u - 1  */
    {
        f = 1;                            /*Setting flag as 1 to assume its a prime number*/
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                f = 0;                    /*Setting flag as 0 when its not a prime number*/
                break;
            }
        }
        if (f == 1)                       /*Calling flag 1 to print everytime in the loop as prime numbers*/
        {
            printf("%d\t", i);
        }
    }
}
