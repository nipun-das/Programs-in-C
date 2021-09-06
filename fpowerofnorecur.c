// C program using recursion to find the power of a number.

#include <stdio.h>
int power(int num, int exp);
void main()
{
    int b, c, e, p;
    printf("Enter the base :\n");
    scanf("%d", &b);
    printf("Enter the exponent:\n");
    scanf("%d", &e);
    p = power(b, e);
    printf("%d to the power %d is  %d", b, e, p);
}

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else
    {
        return (base * power(base, exp - 1));
    }
}