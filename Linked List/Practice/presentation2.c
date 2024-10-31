#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *ptr;
};

int main() {
    struct node *head = NULL, *last = NULL, *newNode;
    int choice = 1, data,middle, count = 0;
    int flag = 0;
    
    while (choice) {
        newNode = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newNode->num);
        
        if (!head) {
            head = last = newNode;
            newNode->ptr = head;
            flag = 1;
        } else {
            last->ptr = newNode;
            last = newNode;
            last->ptr = head;
        }
        
        printf("Flag value after insertion: %d\n", flag);
        
        if (flag == 1) {
            flag = 0;  // Reset flag after first insertion
        }

        printf("Continue? (0 to exit, any number to continue): ");
        scanf("%d", &choice);
        count++;
    }
    printf("Enter Data to Insert insert in the middle: ");
    scanf("%d", &middle);
    int midPosition = count / 2 + 1;
    struct node *newNodeMiddle = malloc(sizeof(struct node));
    
    newNodeMiddle->num = middle;

    struct node *temp = head;
    for (int i = 1; i < midPosition - 1; i++) {
        temp = temp->ptr;
    }

    newNodeMiddle->ptr = temp->ptr;
    temp->ptr = newNodeMiddle;
    count++;

    // Displaying the circular linked list
    temp = head;
    printf("Circular Linked List:\n");
    do {
        printf("%d -> ", temp->num);
        temp = temp->ptr;
    } while (temp != head);
    printf("%d (head)\n", head->num);
    
    return 0;
}