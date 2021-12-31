#include <stdio.h>
#define N 5
int queue[N];

int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (front == -1 && rear == -1) // empty queue
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        printf("Queue is full - overflow");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow");
    }
    else if (front == rear) //single element
    {
        printf("The element removed is %d", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("The element removes is %d", queue[front]);
        front = (front + 1) % N;
    }
}

void display() // CQ – Circular Queue
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("\nQueue underflow");
    }
    while (i != rear)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % N;
    }
    printf(" %d", queue[rear]); // print the last element of the CQ
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
            dequeue();
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