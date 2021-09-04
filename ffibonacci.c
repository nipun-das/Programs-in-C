#include <stdio.h>
int fibonacci(int ind);
void main()
{
   int lim, index;
   printf("Enter the number of elements for the series:\n");
   scanf("%d", &lim); //ind in function
   printf("Fibonacci series with %d elements:\n", lim);
   index = 0;
   for (index = 0; index < lim; index++)
   {
      printf("%d\t", fibonacci(index));
   }

   //Fibonacci series : 0  1  1  2  3  5  8  13  21 ....
   //Index            : 0  1  2  3  4  5  6   7   8 ....
}
int fibonacci(int ind)
{
   if (ind == 0)
   {
      return 0;
   }
   else if (ind == 1)
   {
      return 1;
   }
   else
   {
      return (fibonacci(ind - 1) + fibonacci(ind - 2));
   }
}