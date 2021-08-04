#include <stdio.h>
#include <string.h>
void main()
{
    char str1[15], str2[15];
    int i = 0, f = 1;
    printf("Enter the string 1:\n");
    gets(str1);
    printf("Enter the string 2:\n");
    gets(str2);
    if (strlen(str1) == strlen(str2))
    {
        for (i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] != str2[i])
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
        {
            printf("Strings are equal");
        }
        else
        {
            printf("Strings are not equal");
        }
    }
    else
    {
        printf("Enter strings of equal length");
    }
}