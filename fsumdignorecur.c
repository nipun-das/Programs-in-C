//C program using recursion to find the sum of digits of a number.

#include <stdio.h>
int sum_of_digits(int num);
void main()
{
    int n, s;
    printf("Enter the number :\n");
    scanf("%d", &n);
    s = sum_of_digits(n);
    printf("Sum of Digits is %d", s);
}

int sum_of_digits(int num)
{
    int sum = 0, r;
    if (num != 0)
    {
        return (num % 10 + sum_of_digits(num / 10));
    }
    else
    {
        return 0;
    }
}