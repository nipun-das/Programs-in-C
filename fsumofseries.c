//Program to compute sum of series 1/1! + 1/2! + .. + 1/n!

#include <stdio.h>
#include <math.h>
long int factorial(int n);
float sum(int n);
int main()
{
    int a;
    printf("\nEnter the Number of terms :");
    scanf("%d", &a);
    printf("\nSum of series = %f", sum(a));
}

long int factorial(int n)
{
    int i;
    long fact = 1;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
float sum(int n)
{
    int i;
    float sum = 0;
    for (i = 1; i <= n; i++)
        sum += 1.0 / factorial(i);
    return sum;
}
