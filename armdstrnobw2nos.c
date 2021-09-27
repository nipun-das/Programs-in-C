//Display armstrong no.s between any two numbers and find its sum

#include <stdio.h>
#include <math.h>
int main()
{
    int l, u, n, r, sum = 0, s = 0, i, count = 1;
    printf("Enter the lower limit: ");
    scanf("%d", &l);
    printf("Enter the upper limit: ");
    scanf("%d", &u);
    for (i = l + 1; i <= u - 1; i++)
    {
        n = i;
        while (n > 0)
        {
            n = n / 10;
            count++;
        }
        n = i;
        while (n > 0)
        {
            r = n % 10;
            s += pow(r, count);
            n = n / 10;
        }
        if (s == i)
        {
            printf("%d\t", i);
            sum += i;
        }
        s = 0;
        count = 0;
    }
    printf("\nSUM = %d", sum);
}
