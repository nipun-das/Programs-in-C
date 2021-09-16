//Pointer to String
//Find length of string

#include <stdio.h>
void main()
{
    char *ptr, str[20];
    ptr = str;
    printf("Enter the string:\n");
    gets(ptr);
    int length = 0;
    puts(ptr);
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    printf("Length = %d", length);
}