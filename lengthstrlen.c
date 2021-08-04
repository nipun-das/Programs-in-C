//strlen() inbuilt C function for string length

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[10];
    printf("Enter the string:");
    gets(str1);
    printf("The length of string is %d",strlen(str1));
}
