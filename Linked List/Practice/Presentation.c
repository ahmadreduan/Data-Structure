#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *ptr;
};

typedef struct node NODE;

void insertAtMiddle(NODE *head, int data, int position) {
    NODE *newNode = malloc(sizeof(NODE));
    newNode->num = data;
    
    NODE *temp = head;
    for (int i = 1; i < position - 1; i++) {
        temp = temp->ptr;
    }
    
    newNode->ptr = temp->ptr;
    temp->ptr = newNode;
}

void displayList(NODE *head) {
    NODE *temp = head;
    do {
        printf("%d -> ", temp->num);
        temp = temp->ptr;
    } while (temp != head);
    printf("%d (head)\n", head->num);
}

int main() {
    NODE *head = NULL, *last = NULL, *newNode;
    int choice = 1, data, count = 0;
    
    while (choice) {
        newNode = (NODE *)malloc(sizeof(NODE));
        printf("Enter data: ");
        scanf("%d", &newNode->num);
        
        if (!head) {
            head = last = newNode;
            newNode->ptr = head;
        } else {
            last->ptr = newNode;
            last = newNode;
            last->ptr = head;
        }
        
        printf("Continue? (0 to exit, any number to continue): ");
        scanf("%d", &choice);
        count++;
    }
    
    int midPosition = count / 2 + 1;
    printf("Inserting 99 at position %d\n", midPosition);
    insertAtMiddle(head, 99, midPosition);
    
    printf("Circular Linked List:\n");
    displayList(head);
    
    return 0;
}