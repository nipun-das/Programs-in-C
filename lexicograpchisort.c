#include <stdio.h>
#include <string.h>
void main()
{
    char str[20][20], temp[20];
    int n, i, j;
    printf("Enter the number of strings:\n");
    scanf("%d", &n);
    printf("Enter the strings:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    printf("Strings in the lexicographical order is:\n");
    for (i = 0; i < n; i++)
    {
        puts(str[i]);
    }
}
