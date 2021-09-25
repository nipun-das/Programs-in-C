// Implement a program to open a text input file and count number of characters, words and lines in it; and store the results in an output file

#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *f1, *f2;
    char s;
    int count = 0, word = 1, line = 1;
    f1 = fopen("test.txt", "w");
    if (f1 == NULL)
    {
        printf("file not created!!");
        exit(0);
    }
    printf("Enter the data (ctrl+d to stop):\n");
    while ((s = getchar()) != EOF)
    {
        putc(s, f1);
    }
    fclose(f1);
    f1 = fopen("test.txt", "r");
    while ((s = getc(f1)) != EOF)
    {
        if (s != ' ')
        {
            count++;
        }
        if (s == ' ')
        {
            word++;
        }
        if (s == '\n')
        {
            line++;
            word++;
        }
    }
    int l = line - 1;
    if (line > 1)
    {
        count = count - l;
    }
    fclose(f1);
    f2 = fopen("output.txt", "w");
    if (f2 == NULL)
    {
        printf("file not created!!");
        exit(0);
    }
    fprintf(f1, "Number of characters : %d", count);
    fprintf(f1, "\nNumber of words : %d", word);
    fprintf(f1, "\nNumber of lines : %d", line);
    fclose(f2);
}