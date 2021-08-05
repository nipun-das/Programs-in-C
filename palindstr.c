//Check for a word if it is palindrome or not

#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    int i, j, f = 1, len = 0;

    printf("Enter the string:\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (i = 0, j = len - 1; i <= j, str[i] != '\0'; i++, j--)
    {
        if (str[i] != str[j])
        {
            f = 0;
            break;
        }
    }
    if (f == 0)
    {
        printf("The string is not a palindrome");
    }
    else
    {
        printf("The string is a palindrome");
    }
}