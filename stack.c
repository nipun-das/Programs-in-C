/*Experiment 2.A
C C Nipun Das
VML20CS066*/

#include <stdio.h>

int stack[100], n, top = -1;

void display()
{

    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack : ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}
void push(int item)
{
    if (top == n - 1)
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
        printf("\nDeleted: %d\n", del);
    }
}
int main()
{
    int ch, element;
    printf("\nEnter the size of stack ");
    scanf("%d", &n);
    int stack[n];
    do
    {
        printf("\n\nChoose operation");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
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

/*OUTPUT:

Enter the size of stack 3


Choose operation
1.Push
2.Pop
3.Display
4.Exit
1

Enter element to insert: 1


Choose operation
1.Push
2.Pop
3.Display
4.Exit
1

Enter element to insert: 2


Choose operation
1.Push
2.Pop
3.Display
4.Exit
1

Enter element to insert: 3


Choose operation
1.Push
2.Pop
3.Display
4.Exit
3

Stack : 1 2 3

Choose operation
1.Push
2.Pop
3.Display
4.Exit
1 

Enter element to insert: 5

Stack overflow

Choose operation
1.Push
2.Pop
3.Display
4.Exit
2

Deleted: 3


Choose operation
1.Push
2.Pop
3.Display
4.Exit
3

Stack : 1 2

Choose operation
1.Push
2.Pop
3.Display
4.Exit
2

Deleted: 2


Choose operation
1.Push
2.Pop
3.Display
4.Exit
3

Stack : 1

Choose operation
1.Push
2.Pop
3.Display
4.Exit
2

Deleted: 1


Choose operation
1.Push
2.Pop
3.Display
4.Exit
3

Stack is empty

Choose operation
1.Push
2.Pop
3.Display
4.Exit
4
*/