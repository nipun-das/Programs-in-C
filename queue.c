/*Experiment 2.B
C C Nipun Das
VML20CS066*/

#include <stdio.h>

int queue[100], n, front = -1, rear = -1;

void display()
{
    printf("\nQueue : ");
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}
void enqueue(int item)
{
    if (rear == n - 1)
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
void dequeue()
{
    int del;
    if (front == -1 && rear == -1)
    {
        printf("\nQueue underflow");
    }
    else if (front == rear)
    {
        del = queue[front];
        printf("\nThe element removed is %d\n", del);
        front = rear = -1;
    }
    else
    {
        del = queue[front++];
        printf("\nThe element removed is %d\n", del);
    }
}
int main()
{
    int ch, element;
    printf("\nEnter the size of queue : ");
    scanf("%d", &n);
    int queue[n];
    do
    {
        printf("\n\nChoose operation");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
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

/*OUTPUT:

Enter the size of queue : 3


Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
1

Enter element to insert: 1


Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
1

Enter element to insert: 2


Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
1

Enter element to insert: 3


Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
3

Queue : 1 2 3

Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
1

Enter element to insert: 4

Queue overflow

Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
2

Deleted : 1


Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
2

Deleted : 2


Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
2

Deleted : 3


Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
2

Queue underflow

Choose operation
1.Enqueue
2.Dequeue
3.Display
4.Exit
4
*/

