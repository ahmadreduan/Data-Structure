#include<stdio.h>
#define MAX 5
int queue[MAX];

int front = 0 , rear = -1;

void enqueue(int value){
    if(rear == MAX-1){
        printf("Queue is full");
    }else{
        queue[++rear] = value;
        printf("Enqueue %d\n",value);
    }
}

void dequeue(){
    if(front>rear){
        printf("Queue is empty!\n");
        return;
    }else{
        front++;
    }
}

void display(){
    if(front>rear){
        printf("Queue is empty!\n");
    }else{
        printf("Queue : ");
        for(int i = front ; i <= rear ; i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}


int main(){
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    display();

}