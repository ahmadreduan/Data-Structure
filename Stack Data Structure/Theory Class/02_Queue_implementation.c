#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = 0 , rear = -1;

void enqueue(int value){
    if(rear == MAX-1){
        printf("Queue is full!\n");
        return;
    }else{
        queue[++rear] = value;
        printf("Enqueued : %d | Rear : %d\n",value,rear);
    }
    
}

void display(){
    if(front>rear){
        printf("Queue is empty!\n");
        return;
    }else{
        printf("Queue : ");
        for(int i = front ; i <=rear ; i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

void dequeue(){
    if(front > rear ){
        printf("Queue is empty!\n");
        return;
    }else{
        printf("Dequeued : %d  | Front : %d \n",queue[front],front);
        front++;
    }
}



int main(){
    enqueue(50);
    enqueue(60);
    enqueue(70);
    dequeue();
    enqueue(80);
    display();


    enqueue(100);
    display();

    dequeue();
    enqueue(90);

    display();
}