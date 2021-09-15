//Printing each array elements address and value

#include <stdio.h>
void main()
{
    int a[5] = {100, 200, 300, 400, 500};
    int i;
    int *ptr = a; // *ptr = &a[0]

    //Address of (ptr+i)
    //Value stored at the address *(ptr+i)

    for (i = 0; i < 5; i++)
    {
        printf("Address of a[%d]=%p\t", i, (ptr + i));
        printf("Value in a[%d]=%d\n", i, *(ptr + i));
    }
}