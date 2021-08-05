//Check for a word if it is palindrome or not using strcmp(),strrev(),strcpy()

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20],str2[20];
    printf("Enter the string:\n");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("The string is a palindrome");
    }
    else
    {
        printf("The string is not a palindrome");
    }
}    