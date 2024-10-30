#include <stdio.h>
#include <stdlib.h>

void main() {
    struct node {
        int num;
        struct node *link;
    };
    struct node *first = NULL, *temp = NULL, *head;
    int count = 0, choice = 1, flag = 1;

    // Create circular linked list with user input
    while (choice) {
        head = malloc(sizeof(struct node));
        printf("Enter a data element to insert into the Linked List: ");
        scanf("%d", &head->num);

        if (first != NULL) {
            temp->link = head;
        } else {
            first = head;
        }
        temp = head;
        
        printf("Continue? (Type 0 to exit or any integer to continue): ");
        scanf("%d", &choice);
    }
    temp->link = first;  // Complete the circle

    // Count nodes
    temp = first;
    do {
        count++;
        temp = temp->link;
    } while (temp != first);
    printf("Total nodes: %d\n", count);

    // Insert in the middle
    int middle = (count / 2) + 1, newData;
    printf("Enter data to insert at the middle position: ");
    scanf("%d", &newData);

    struct node *newNode = malloc(sizeof(struct node));
    newNode->num = newData;

    temp = first;
    for (int i = 1; i < middle - 1; i++) {
        temp = temp->link;
    }
    newNode->link = temp->link;
    temp->link = newNode;

    // Print the circular linked list
    temp = first;
    printf("\nCircular Linked List:\n");
    do {
        printf("%d -> ",temp->num);
        temp = temp->link;
        if (temp == first && flag) {
            printf(" (back to start)");
            flag = 0;
        }
    } while (temp != first);
    printf("\n");
}