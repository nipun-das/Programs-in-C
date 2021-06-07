#include <stdio.h>
int main()
{
    int n, rev = 0, r;
    printf("Enter the Number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("The reverse of %d is %d", n, rev);

    return 0;
}

