#include <stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp = fopen("Input.txt", "w"); //Create the file Input.txt in write mode
    //Error Checking
    if (fp == NULL)
    {
        printf("Could not open the file");
    }
    printf("Enter data to be stored on file press ctrl+Z to STOP\n");
    //read from keyboard  assigns to c and checks against EOF

    while ((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp); //Closing the file
    printf("Data on file\n");
    fp = fopen("Input.txt", "r"); //Reopen file for reading
    //read a character file and assign to c and then chek=cks against EOF
    while ((c = getc(fp)) != EOF)
    {
        putchar(c); //display character on screen
    }
    fclose(fp);
}