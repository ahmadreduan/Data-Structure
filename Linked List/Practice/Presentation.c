#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node
{
    int data;
    int flag;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *tail = NULL, *temp = NULL, *current = NULL;
    int data, count = 0;

    // Continuously take user input to create the circular linked list
    while (1)
    {
        printf("Enter data for node (or -1 to finish): ");
        scanf("%d", &data);
        if (data == -1)
            break;

        // Allocate memory for new node
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->flag = 0;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp; // First node
        }
        else
        {
            tail->next = temp; // Link last node to new node
        }
        tail = temp; // Update tail to new node
        count++;
    }

    // Making the list circular
    if (tail != NULL)
    {
        tail->next = head; // Last node points to first node
        tail->flag = 1;    // Last node's flag set to 1
    }

    // Insert new node in the middle
    int midPosition = count / 2 + 1;
    printf("Enter data for new node to insert in the middle: ");
    scanf("%d", &data);

    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->flag = 0;

    current = head;
    for (int i = 1; i < midPosition - 1; i++)
    {
        current = current->next; // Traverse to the middle position
    }

    temp->next = current->next; // Insert new node
    current->next = temp;

    // Printing the data and flag values
    printf("\nCircular Linked List:\n");
    current = head;
    do
    {
        printf("Data: %d, Flag: %d -> ", current->data, current->flag);
        current = current->next;
    } while (current != head);

    return 0;
}