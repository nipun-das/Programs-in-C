/*Armstrong Number Check*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n, num, r, sum = 0, i = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    num = n;

    while (num > 0)
    {
        num = num / 10;
        i++;
    }
    num = n;

    while (num > 0)
    {
        r = num % 10;
        sum += pow(r, i);
        num = num / 10;
        
    }
    if (sum == n)
    {
        printf("%d is an Armstrong Number", n);
    }
    else
    {
        printf("%d is not an Armstrong Number", n);
    }
    return (0);
}