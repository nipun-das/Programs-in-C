//Sum of first natural numbers using recursion

#include <stdio.h>
int sum_of_natno(int n);
void main()
{
    int n, s;
    printf("Enter a number :\n");
    scanf("%d", &n);
    s = sum_of_natno(n);
    printf("sum of first %d natural numbers is %d", n, s);
}
int sum_of_natno(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n + sum_of_natno(n - 1));
    }
}