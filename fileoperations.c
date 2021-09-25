// Implement a program to create a file and perform the following
// i. Write data to the file
// ii. Read the data in a given file & display the file content on console
// iii. Append new data and display on console do the following using pointers

#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char c;
    fp = fopen("sample.txt", "w");
    if (fp == NULL)
    {
        printf("file cannot be created!!");
        exit(0);
    }
    printf("Enter the data (ctrl+d to stop) :\n");
    while ((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    printf("\nEntered data: \n");
    fp = fopen("sample.txt", "r");
    while ((c = getc(fp)) != EOF)
    {
        putchar(c);
    }
    fclose(fp);
    fp = fopen("sample.txt", "a");
    printf("\nEnter the data to be added (ctrl+d to stop) :\n");
    while ((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    printf("\nAppended data: \n");
    fp = fopen("sample.txt", "r");
    while ((c = getc(fp)) != EOF)
    {
        putchar(c);
    }
    fclose(fp);
}
