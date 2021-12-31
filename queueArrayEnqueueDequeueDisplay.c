#include <stdio.h>
#define MAX 8

int queue[MAX], front = -1, rear = -1;

void enqueue(int item)
{
    if (rear == MAX - 1)
    {
        printf("\nQueue overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = item;
    }
    else
    {
        rear++;
        queue[rear] = item;
    }
}

void pop()
{
    int del;
    if (front == -1 && rear == -1)
    {
        printf("\nQueue underflow");
    }
    else if (front == rear)
    {
        del = queue[front];
        printf("The element removed is %d", del);
        front = rear = -1;
    }
    else
    {
        del = queue[front++];
        printf("The element removed is %d", del);
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue underflow");
    }
    else
    {
        printf("\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

int main()
{
    int ch, element;
    do
    {
        printf("\nChoose operation");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display queue");
        printf("\n4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter element to insert: ");
            scanf("%d", &element);
            enqueue(element);
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