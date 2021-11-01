//factorial of a  number using recursion

#include <stdio.h>
long int factorial(int n);
void main()
{
    int a;
    printf("Enter a number :\n");
    scanf("%d", &a);
    printf("factorial of %d is %d", a, factorial(a));
}
long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
