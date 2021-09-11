// swap two numbers using pointers
#include <stdio.h>
void main()
{
   int num1, num2, *x, *y, temp;
   x = &num1;
   y = &num2;
   printf("Enter value of num 1:\n");
   scanf("%d", &num1);
   printf("Enter value of num 2:\n");
   scanf("%d", &num2);
   printf("before swapping num1=%d num2=%d\n", num1, num2);
   temp = *x;
   *x = *y;
   *y = temp;
   printf("after swapping num1=%d num2=%d", num1, num2);
}
