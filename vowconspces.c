//Read a string, store it in a an array, count the number of vowels, consonants and spaces in it.

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[15];
    int nv = 0, nc = 0, ns = 0, i;
    printf("Enter the string:\n");
    gets(str1);
    for (i = 0; str1[i] != '\0'; i++)
    {

        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
        {
            nv++;
        }
        else if (str1[i] >= 'a' && str1[i] <= 'z' || str1[i] >= 'A' && str1[i] <= 'Z')
        {
            nc++;
        }
        else if (str1[i] == ' ')
        {
            ns++;
        }
    }
    printf("Number of Vowels is %d\n", nv);
    printf("Number of Consonants is %d\n", nc);
    printf("Number of Spaces is %d\n", ns);
}