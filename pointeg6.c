//Pointer to String

#include <stdio.h>
void main()
{
    char *name = "DELHI";
    int length = 0;
    printf("%s\n", name);
    while (*name != '\0')
    {
        printf("%c is stored at address %d\n", *name, name);
        name++;
        length++;
    }
    printf("Length = %d", length);
}