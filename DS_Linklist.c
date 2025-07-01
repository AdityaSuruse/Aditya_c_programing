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

int main()
{
    int ch, data;
    Node *head = NULL;

    while (1)
    {
        printf("\nn1. Append\n2.Display\n3.Exit\nEnter a Choice :");
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
            return 0;
        default:
            printf("INVALED CHOICE !!");
            break;
        }
    }
}