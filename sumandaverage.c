#include <stdio.h>
void main()
{
    int a[10], i = 0, sum = 0;
    float avg;
    printf("Enter the elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    avg = (float)sum / 10;
    printf("The sum of the numbers entered is %d\n", sum);
    printf("The average of the numbers entered us %.2f", avg);
}
