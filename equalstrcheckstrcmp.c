//Compare strings using inbuilt function strcmp()
// var=strcmp(str1,str2)
//if var==0 - strings are equal
//if var>0  - str1 is greater than str2
//if var<0  - str1 is less than str2

#include <stdio.h>
#include <string.h> 
void main()
{
    char str1[15],str2[15];
    int var;
    printf("Enter the string 1:\n");
    gets(str1);
    printf("Enter the string 2:\n");
    gets(str2);
    var=strcmp(str1,str2);
    if(strlen(str1)==strlen(str2))
    {
        if(var==0)
        {
            printf("Strings are equal");
        }
        else
        {
            printf("Strings are unequal");
        }
    }
    else
    {
        printf("Please enter strings of equal length");
    }
}
