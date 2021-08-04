//Concatenate string

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20], str2[20], str3[40];
    int i, j, len;
    printf("Enter the string 1:\n");
    gets(str1);
    printf("Enter the string 2:\n");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str3[i] = str1[i];
    }

    str3[strlen(str1)] = ' ';

    for (i = 0, j = strlen(str1) + 1; str2[i] != '\0'; i++, j++)
    {
        str3[j] = str2[i];
    }
    str3[j] != '\0';
    printf("The concatenated string is: %s", str3);
}
