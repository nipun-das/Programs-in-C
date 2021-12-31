//Write a C program to reverse a string using a stack.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 25

int stack[MAX], top = -1;

void push(char item)
{
    if (top == MAX - 1)
    {
        printf("\nStack overflow");
        exit(0);
    }
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}

void pop()
{
    char del;
    if (top == -1)
    {
        printf("\nStack underflow");
        exit(0);
    }
    else
    {
        del = stack[top];
        top = top - 1;
        printf("%c", del);
    }
}

int main()
{
    int i;
    char str[MAX];
    printf("\nEnter the string you want to reverse : ");
    scanf("%[^\n]s", str);
    for (i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }
    printf("Entered string is : %s\n",str);
    printf("Revered string is : ");
    for (i = 0; i < strlen(str); i++)
    {
        pop();
    }
}