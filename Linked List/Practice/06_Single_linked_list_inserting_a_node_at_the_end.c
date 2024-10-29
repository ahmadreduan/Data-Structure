#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
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

    printf("%d %d %d\n",head->data,head->link->data,head->link->link->data);
    int count = 0;

    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        count++;
        ptr = ptr->link;
    }
    printf("Total number of node is : %d",count);
}