#include <stdio.h>
#include <ctype.h>
void main()
{
    char c;
    printf("\nEnter any Key on Your Keyboard\n");
    c = getchar();
    if (isalpha(c) > 0)
    {
        printf("\nYou have Entered an Alphabet");
    }
    else if (isdigit(c) > 0)
    {
        printf("\nYou Have Entered a Digit");
    }
    else
    {
        printf("\nYou did not Enter any Alphanumeric Character");
    }
}
