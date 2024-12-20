#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int dest;
    struct Node* next;
};

struct List
{
    struct Node* head;
};

struct Graph
{
    int vertices;
    struct List* array;
};
struct Node* createNode(int dest){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int vartices){
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->vertices = vartices;
    graph->array = malloc(vartices*sizeof(struct List));

    for(int i = 0 ; i < vartices ; i++){
        graph->array[i].head = NULL;
    }

    return graph;
}

void addEdge(struct Graph* graph , int src , int dest){
    struct Node* newNode = createNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;


    newNode = createNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

void printGraph(struct Graph* graph){
    for(int i = 0 ; i<graph->vertices;i++){
        struct Node* temp = graph->array[i].head;
        printf("Adjacency list of vartes %d : head ",i);
        while(temp){
            printf("->%d",temp->dest);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main(){
    int vertices = 5;

    struct Graph* graph = createGraph(vertices);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printGraph(graph);

    return 0;



}