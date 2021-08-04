#include <stdio.h>
void main()
{
    char str[20];
    int i=0,len=0;
    printf("Enter the string:");
    gets(str);
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    printf("The length of string is %d",len);
}