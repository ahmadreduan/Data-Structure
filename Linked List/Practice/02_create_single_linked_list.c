#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


int main(){
    struct node *head = NULL;

    head = malloc(sizeof(struct node));
    head->data = 50;
    head->next = NULL;

    struct node *current = NULL;
    current = malloc(sizeof(struct node));
    current->data = 60;
    current->next = NULL;

    // Link the first node to the second node
    head->next = current;

    printf("%d %d",head->data,head->next->data);
    return 0;

}
