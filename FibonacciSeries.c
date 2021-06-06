/*FIBONACCI SERIES*/

#include <stdio.h>
void main()
{
    int i, n, a = -1, b = 1, c;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("\n%d", c);
        a = b;
        b = c;
    }
}
