//Understanding pointers

//Difference between *ptr++  and  (*ptr)++

#include <stdio.h>
void main()
{
    int a[3] = {100, 150, 200};
    int *ptr = a;                //points to first element
    printf("ptr = %p\n", ptr);   //address of first location
    printf("*ptr = %d\n", *ptr); //value in location ptr

    (*ptr)++; //take value at ptr and increment the element
    printf("(*ptr)++ = %d\n", (*ptr));
    *ptr++; //pointer will point to next location and take value
    printf("(*ptr++) = %d\n", (*ptr));
}