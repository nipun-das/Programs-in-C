#include <stdio.h>
void main()
{
    char str1[15],str2[30];
    int i=0;
    printf("Enter the string 1:\n");
    gets(str1);
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    } 
    str2[i]='\0';
    printf("Entered string 1 is %s\n",str1);
    printf("Copied string 2 is %s",str2);   

}