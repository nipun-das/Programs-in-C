#include <stdio.h>
#define MAX 8

int stack[MAX], top = -1;

void push(int item)
{
    if (top == MAX - 1)
    {
        printf("\nStack overflow");
    }
    else
    {
        stack[++top] = item;
    }
}

void pop()
{
    int del;
    if (top == -1)
    {
        printf("\nStack underflow");
    }
    else
    {
        del = stack[top--];
        printf("\nDeleted: %d", del);
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nStack underflow");
    }
    else
    {
        printf("\n");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}

int main()
{
    int ch, element;
    do
    {
        printf("\nChoose operation");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display stack");
        printf("\n4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter element to insert: ");
            scanf("%d", &element);
            push(element);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Invalid Choice!");
            break;
        }
    } while (ch < 4);
}
