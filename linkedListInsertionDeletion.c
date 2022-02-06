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
    printf("\nEnter the data to insert : ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd()
{
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to insert : ");
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
    printf("\nEnter the position to insert at : ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("\nInvalid position!");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data to insert : ");
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
        printf("\nList empty");
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
    printf("\nEnter the position to delete from : ");
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
void reverse()
{
    struct node *prevnode, *currentnode, *nextnode;
    prevnode = NULL;
    currentnode = nextnode = head;
    while (nextnode != NULL)
    {

        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }

    head = prevnode;
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
        printf("\n8.Reverse");
        printf("\n9.Exit\n");
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
            reverse();
            break;
        case 9:
            break;
        default:
            printf("Invalid Choice!");
            break;
        }
    } while (ch < 9);
}
