/*
Write a program to enter the marks of 3 subjects, Physics, Chemistry
and Maths. Display the grade of a student as per the following rules,
80 to 100 - Honours
60 to 79 - First class
50 to 59 - Second class
40 to 49 - Third class
0 to 39 - /Fail
*/

#include <stdio.h>
void main()
{
    int a, b, c, avg;
    printf("Enter the marks of Physics:\n");
    scanf("%d", &a);
    printf("Enter the marks of Chemistry:\n");
    scanf("%d", &b);
    printf("Enter the marks of Maths:\n");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    if (avg >= 80 && avg <= 100)
    {
        printf("Honours!");
    }
    else if (avg >= 60 && avg <= 79)
    {
        printf("First Class!");
    }
    else if (avg >= 50 && avg <= 59)
    {
        printf("Second Class!");
    }
    else if (avg >= 40 && avg <= 49)
    {
        printf("Third Class!");
    }
    else
    {
        printf("Fail!");
    }
}