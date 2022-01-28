#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *newNode, *temp;
int count = 0;

void display()
{
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        temp = head;
        printf("\nLinked List : ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
            count++;
        }
    }
}

void insertAtBeginning()
{
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert : ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd()
{
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert : ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPos()
{
    int pos, i = 1;
    printf("Enter the position to insert at : ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Invalid position!");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data to insert : ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteFromBeginning()
{
    if (head == NULL)
    {
        printf("List empty");
    }
    else
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
void deletefromEnd()
{
    struct node *prevnode;
    temp = head;
    while (temp->next != NULL)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = NULL;
    }
    else
    {
        prevnode->next = NULL;
    }
    free(temp);
}

void deletefromPos()
{
    struct node *nextnode;
    int pos, i = 1;
    temp = head;
    printf("Enter the position to delete from : ");
    scanf("%d", &pos);
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}

void main()
{
    int ch;
    do
    {
        printf("\n\nChoose operation");
        printf("\n1.Display");
        printf("\n2.Insert at Beginning");
        printf("\n3.Insert at End");
        printf("\n4.Insert at Specified Position");
        printf("\n5.Delete from Beginning");
        printf("\n6.Delete from End");
        printf("\n7.Delete from a Specified Position");
        printf("\n8.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            insertAtBeginning();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPos();
            break;
        case 5:
            deleteFromBeginning();
            break;
        case 6:
            deletefromEnd();
            break;
        case 7:
            deletefromPos();
            break;
        case 8:
            break;
        default:
            printf("Invalid Choice!");
            break;
        }
    } while (ch < 8);
}

/*OUTPUT:

Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
2
Enter the data to insert : 1


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
2
Enter the data to insert : 2


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
2
Enter the data to insert : 3


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
1

Linked List : 3 2 1

Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
2
Enter the data to insert : 4


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
2
Enter the data to insert : 5


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
1

Linked List : 5 4 3 2 1

Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
3
Enter the data to insert : 6


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
1

Linked List : 5 4 3 2 1 6

Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
4
Enter the position to insert at : 3
Enter the data to insert : 7


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
1

Linked List : 5 4 3 7 2 1 6

Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
5


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
1

Linked List : 4 3 7 2 1 6

Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
6


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
1

Linked List : 4 3 7 2 1

Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
7
Enter the position to delete from : 3


Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
1

Linked List : 4 3 2 1

Choose operation
1.Display
2.Insert at Beginning
3.Insert at End
4.Insert at Specified Position
5.Delete from Beginning
6.Delete from End
7.Delete from a Specified Position
8.Exit
8
*/
