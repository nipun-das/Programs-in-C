//Prime number checking

#include <stdio.h>
int prime_check(int);
void main()
{
    int n, result;
    printf("Enter a Number to check :");
    scanf("%d", &n);
    result = prime_check(n);
    if (result == 0)
        printf("%d is prime.\n", n);
    else
        printf("%d is not prime.\n", n);
}

int prime_check(int num)
{
    int i, flag = 0;
    if (num == 1)
        return 1;
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    return flag;
}
