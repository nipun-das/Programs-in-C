//Read a string from the user , if the string has atleast 3 vowels check whether it is palindrome or not

#include <stdio.h>
#include <string.h>
void main()
{
    char str[15], choice;

    int nv = 0, i = 0, j, len = 0, f = 1;
    printf("Enter the string:\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            nv++;
        }
    }
    printf("Number of Vowels is %d\n", nv);
    if (nv >= 3)
    {
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
            printf("The string is not a palindrome\n");
        }
        else
        {
            printf("The string is a palindrome\n");
        }
    }
}