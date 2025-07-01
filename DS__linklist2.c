#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void append(Node **r, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if ((*r) == NULL)
        (*r) = newNode;
    else
    {
        Node *temp = (*r);
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}

void display(Node *r)
{
    while (r != NULL)
    {
        printf("%d\n", r->data);
        r = r->next;
    }
}

void insertFirst(Node **r, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    if ((*r) == NULL)
        newNode->next = NULL;
    else
        newNode->next = (*r);
    (*r) = newNode;
}

void deleteLast(Node **r)
{
    if ((*r)->next == NULL)
        (*r) = NULL;
    else
    {
        Node *temp = (*r);
        while (temp->next->next != NULL)
            temp = temp->next;
        temp->next = NULL;
    }
}

void deletFirst(Node **r)
{
    Node *del = (*r);
    (*r) = (*r)->next;
    del->next = NULL;
    free(del);
}

int search(Node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
            return 1;
        head = head->next;
    }
    return 0;
}

int main()
{
    int ch, data;
    Node *head = NULL;

    while (1)
    {
        printf("\nn1. Append\n2.Display\n3.insert First \n4. Delete Last \n5.Delete First \n6.Search\n7.Exit\nEnter a Choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter A Data");
            scanf("%d", &data);
            append(&head, data);
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("Enter A Data");
            scanf("%d", &data);
            insertFirst(&head, data);
            break;
        case 4:
            deleteLast(&head);
            break;
        case 5:
            deletFirst(&head);
            break;
        case 6:
            printf("Enter Number For Search :");
            scanf("%d", &data);
            if (search(head, data))
                printf("FOUND !!");
            else
                printf("NOT FOUND !!");
            break;
        default:
            printf("INVALED CHOICE !!");
            break;
        }
    }
}