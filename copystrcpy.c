//Copy a string to another using inbuilt function strcpy()

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[15],str2[30];
    int i=0;
    printf("Enter the string 1:\n");
    gets(str1);
    strcpy(str2,str1);
    printf("Entered string 1 is %s\n",str1);
    printf("Copied string 2 is %s",str2);   

}