#include <stdio.h>
int recurSum(int n);
int main()
{
    int lim, sum;
    printf("Enter the limit : ");
    scanf("%d", &lim);
    sum = recurSum(lim);
    printf("Sum up to %d is %d\n", lim, sum);
}
int recurSum(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (n + recurSum(n - 1));
    }
}