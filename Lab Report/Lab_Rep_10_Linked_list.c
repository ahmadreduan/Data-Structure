#include <stdio.h>
#include <stdlib.h>
/* Name : Reduan Ahmad
   ID : 232-35-016
   Section : A2
   Problem : Linked List.

*/
struct node
{
    int data;
    char alpha;
    struct node *link;
};


void add_at_end(struct node *head, int data, char alpha)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));


    temp->data = data;
    temp->alpha = alpha;
    temp->link = NULL;


    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}


void print_data(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty");
    }


    struct node *ptr = NULL;
    ptr = head;


    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        printf("%c\n", ptr->alpha);
        ptr = ptr->link;
    }
}


void main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data = 15;
    head->alpha = 'a';
    head->link = NULL;


    struct node *current = NULL;
    current = malloc(sizeof(struct node));
    current->data = 16;
    current->alpha = 'b';
    current->link = NULL;


    head->link = current;


    add_at_end(head, 17, 'c');
    add_at_end(head, 18, 'd');


    print_data(head);
}
