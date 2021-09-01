//function to swap two numbers

#include<stdio.h>  
void swap(int x, int y);  
  
int main()  
{  
    int a, b;  
  
    printf("Enter values for a and b\n");  
    scanf("%d %d", &a, &b);  
  
    printf("\n\n Value Before calling swapping function: a = %d and b = %d\n", a, b);  
    printf("\n");
  
    swap(a, b);

    printf("Value after calling swapping function: a = %d and b = %d\n", a, b);  
  
    return 0;  
}  
  
void swap(int x, int y)  
{  
    int temp;  
  
    temp = x;  
    x    = y;  
    y    = temp;  
  
    printf("\nValue after swapping: a = %d and b = %d\n", x, y);  
    printf("\n");
}  
