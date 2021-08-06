//Change case of a string using strlwr(), strupr()

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[15];
    printf("Enter the string:\n");
    gets(str1);
    printf("The string in lower cases is :%s \n", strlwr(str1));
    printf("The string in upper cases is :%s \n", strupr(str1));
}