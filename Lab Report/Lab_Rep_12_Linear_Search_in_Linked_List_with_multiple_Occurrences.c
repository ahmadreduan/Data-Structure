#include <stdio.h>
#include <stdlib.h>
/* Name : Reduan Ahmad
   ID : 232-35-016
   Section : A2
   Problem : Linear Search  in linked list with multiple occurrences.
*/

struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void appendNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void linearSearch(struct Node* head, int target) {
    struct Node* temp = head;
    int position = 0;
    int found = 0;

    printf("Searching for %d in the linked list...\n", target);

    while (temp != NULL) {
        if (temp->data == target) {
            printf("Element %d found at position %d\n", target, position);
            found = 1;
        }
        temp = temp->next;
        position++;
    }

    if (!found) {
        printf("Element %d not found in the linked list.\n", target);
    }
}


void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = NULL;
    int n, data, target;

    printf("Enter the number of elements to add to the linked list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        appendNode(&head, data);
    }

    displayList(head);

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    linearSearch(head, target);

    return 0;
}
