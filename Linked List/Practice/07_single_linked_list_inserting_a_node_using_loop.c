#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL, *newNode, *temp;

    int choice = 1;

    while (choice)
    {
        newNode = malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d", &newNode->data);
        newNode->link = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newNode;
        }
        printf("Do you want to continue (1/0)? ");
        scanf("%d", &choice);
    }

    printf("The singly linked list is: ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");

    return 0;
}