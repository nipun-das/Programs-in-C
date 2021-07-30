#include <stdio.h>
void main()
{
    int a, b, c, i;
    printf("Enter the number whose multiplication table you want: ");
    scanf("%d", &a);
    for (i = 1; i < 11; i++)

    {
        b = a * i;
        printf("\n");
        printf(" %d x %d = %d", a, i, b);
    }
}