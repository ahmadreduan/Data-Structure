#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void count_of_node(struct node *head){
    int count = 0;
    if(head == NULL){
        printf("Linked list is empty ");
        return;
    }

    struct node *ptr = NULL;
    ptr = head;

    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    } 
    printf("Total number of node : %d\n",count);
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;

    head->link = current;

    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 30;
    current2->link = NULL;

    current->link = current2;


    head->data;
    head->link->data;
    head->link->link->data;

    count_of_node(head);
    printf("%d %d %d",head->data,head->link->data,head->link->link->data);
}