// C program using recursion to find GCD of two numbers.

#include <stdio.h>
int gcd(int num1, int num2);
void main()
{
    int n1, n2, g;
    printf("Enter the first number :\n");
    scanf("%d", &n1);
    printf("Enter the second number :\n");
    scanf("%d", &n2);
    g = gcd(n1, n2);
    printf("GCD of %d and %d is : %d", n1, n2, g);
}

int gcd(int num1, int num2)
{
    if (num1 != num2)
    {
        if (num1 > num2)
        {
            return gcd(num1 - num2, num2);
        }
        else
        {
            return gcd(num1, num2 - num1);
        }
    }
    else
    {
        return num1;
    }
}