//Read and Display array elements

#include <stdio.h>
void main()
{
    int a[20], n, i, *p;
    p = a; //Pointer Initialization
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    //Address of (ptr+i)
    //Value stored at the address *(ptr+i)
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i)); //No need to give &(p+i)
    }
    printf("The Array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }
}