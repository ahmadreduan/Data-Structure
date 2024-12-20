// Basic C Program for adjacency list representation
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int dest;
    struct Node* next;
};

// Graph structure
struct Graph {
    int vertices;
    struct Node** list;
};

// Create a new node
struct Node* createNode(int dest) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Create a graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->vertices = vertices;
    graph->list = malloc(vertices * sizeof(struct Node*));

    for (int i = 0; i < vertices; i++) {
        graph->list[i] = NULL;
    }
    return graph;
}

// Add edge
void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->list[src];
    graph->list[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->list[dest];
    graph->list[dest] = newNode;
}

// Print graph
void printGraph(struct Graph* graph) {
    for (int i = 0; i < graph->vertices; i++) {
        printf("%d: ", i);
        for (struct Node* temp = graph->list[i]; temp; temp = temp->next) {
            printf("%d -> ", temp->dest);
        }
        printf("NULL\n");
    }
}

// Main function
int main() {
    struct Graph* graph = createGraph(5);

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