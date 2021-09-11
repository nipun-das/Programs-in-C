// swap two numbers using pointers and function
#include <stdio.h>
void swap(int *, int *);
void main()
{
   int num1, num2;
   printf("Enter value of num 1:\n");
   scanf("%d", &num1);
   printf("Enter value of num 2:\n");
   scanf("%d", &num2);
   printf("before swapping num1=%d num2=%d\n", num1, num2);

   swap(&num1, &num2);

   printf("after swapping num1=%d num2=%d", num1, num2);
}

void swap(int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
