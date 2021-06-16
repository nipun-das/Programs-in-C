//FIBONACCI SERIES

#include <stdio.h>
void main()
{
    int i, n, a = -1, b = 1, c;  //Gave a from -1 and b from 1 to start the fibonacci numbers from 0 
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
