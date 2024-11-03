#include <stdio.h>
#define MAX 5
int queue[MAX];
int fornt = -1, rear = -1;

void enqueue(int value){
    if(rear == MAX-1){
        perror("Queue is full!\n");
    }else if (fornt == -1){
        rear = 0;
        fornt = 0;
        queue[rear] = value;
        printf("Enqueued %d \n",value);

    }else{
        queue[++rear] = value;
        printf("Enqueued %d \n",value);
    }
    
    
}

void display() {
    if (fornt > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue: ");
        for (int i = fornt; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}


int main()
{
    enqueue(50);
    display();
}