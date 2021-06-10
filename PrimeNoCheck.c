/*CHECK FOR PRIME NUMBERS*/

#include <stdio.h>
void main()
{
    int n, i, f = 1;
    printf("Enter the Number ");
    scanf("%d", &n);
    
    /*1 AND 0 ARE NEITHER PRIME NOR COMPOSITES SO DEFINE THEIR CASES FIRST*/
    if (n == 1 || n == 0)
    {
        printf("\n%d is Neither Prime nor Composite", n);
    }
    
    /*FOR NUMBERS STARTING FROM 2*/
    else
    {
        for (i = 2; i <= n / 2; i++)   /*HERE, i<=n/2 instead of i<=n can be used as it still valid*/
                                       /*Input Number is checked whether it is divisible by counter i till input/2*/
                                       /*If it is divisible by any one in that range then the input is not Prime!*/
        {
            if (n % i == 0)
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
        {
            printf("\n%d is a Prime Number", n);
        }
        else
        {
            printf("\n%d is not a Prime Number", n);
        }
    }
}
