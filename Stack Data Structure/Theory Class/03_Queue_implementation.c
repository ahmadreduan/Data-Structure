#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = 0, rear = -1;
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full!\n");
        return;
    }
    else
    {
        queue[++rear] = value;
        printf("Enqueue %d \n", value);
    }
}

void dequeue(){
    if(front>rear){
        printf("Queue is empty!\n");
    }else{
        front++;
    }
}

void display(){
    if(front>rear){
        printf("Queue is empty!\n");
    }else{
        printf("Queue : ");
        for(int i = front ; i<=rear ; i++){
            printf("%d ",queue[i]);
        }
    }
}

int main()
{
    enqueue(50);
    enqueue(100);
    dequeue();
    display();
}