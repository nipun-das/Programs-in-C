#include <stdio.h>
void main()
{
    int n, i, f = 1;
    printf("Enter the Number ");
    scanf("%d", &n);
    if (n == 1 || n == 0)
    {
        printf("\n%d is Neither Prime nor Composite", n);
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
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