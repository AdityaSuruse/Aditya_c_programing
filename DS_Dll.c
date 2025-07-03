#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next, *pre;
} Node;

void append(Node **r, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    if ((*r) == NULL) // if Linklist is empty
    {
        (*r) = newNode;
        (*r)->next = (*r)->pre = NULL;
    }
    else
    {
        Node *temp = (*r);
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->pre = temp;
        newNode->next = NULL;
    }
}
void display(Node *head)
{
    Node *temp;
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    int data, pos, ch;
    while (1)
    {
        printf("\n1. Append\n2. Display\n3. insert First \n4. Delete Last \n5. Delete First \n6. Search\n7. Exit\nEnter a Choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Ente A Data :");
            scanf("%d", &data);
            append(&head, data);
            break;
        case 2:
            display(head);
            break;
        case 7:
            return 0;
            break;
        default:
        printf("Invaled Choice !!");
            break;
        }
    }
}