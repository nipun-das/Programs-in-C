//Concatenate string
#include <string.h>
#include <stdio.h>
void main()
{
    int i = 0, j = 0;
    char str1[20], str2[20], str3[40];
    printf("enter the first string\n");
    gets(str1);
    printf("enter the second string\n");
    gets(str2);
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++, j++;
    }
    i = 0;
    str3[j++] = ' ';
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++, j++;
    }
    str3[j] = '\0';
    printf("concatenated string is\n %s\n", str3);
}
