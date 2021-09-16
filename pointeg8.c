//Concatenate String

#include <stdio.h>
void main()
{
    char str1[20], str2[20];
    char *s1, *s2;
    printf("Enter the first string:\n");
    gets(str1);
    printf("Enter the second string:\n");
    gets(str2);
    s1 = str1;
    s2 = str2;

    //move till end of str1
    while (*s1 != '\0')
    {
        s1++;
    }

    //copy str2 to str1
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    printf("Concatenated string is: %s\n", str1);
}