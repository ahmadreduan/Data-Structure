#include <stdio.h>
#include <stdlib.h>

// অ্যাডজাসেন্সি লিস্টের জন্য একটি নোডের কাঠামো
struct Node {
    int dest;
    struct Node* next;
};

// প্রতিটি ভেরটেক্সের জন্য লিস্টের কাঠামো
struct List {
    struct Node* head;
};

// গ্রাফের কাঠামো
struct Graph {
    int vertices;
    struct List* array;
};

// নতুন নোড তৈরি করার ফাংশন
struct Node* createNode(int dest) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// গ্রাফ তৈরি করার ফাংশন
struct Graph* createGraph(int vertices) {
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->vertices = vertices;

    // অ্যাডজাসেন্সি লিস্টের জন্য মেমোরি বরাদ্দ
    graph->array = malloc(vertices * sizeof(struct List));

    // প্রতিটি লিস্টের হেড ইনিশিয়ালাইজ করা হচ্ছে
    for (int i = 0; i < vertices; i++) {
        graph->array[i].head = NULL;
    }

    return graph;
}

// গ্রাফে একটি এজ যোগ করার ফাংশন
void addEdge(struct Graph* graph, int src, int dest) {
    // সোর্স থেকে ডেস্টিনেশনে এজ যোগ
    struct Node* newNode = createNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    // উল্টো এজ যোগ (অযুত গ্রাফের জন্য)
    newNode = createNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// গ্রাফ প্রিন্ট করার ফাংশন
void printGraph(struct Graph* graph) {
    for (int i = 0; i < graph->vertices; i++) {
        struct Node* temp = graph->array[i].head;
        printf("Adjacency list of vertex %d : head", i);
        while (temp) {
            printf(" -> %d", temp->dest);
            temp = temp->next;
        }
        printf("\n");
    }
}

// প্রধান ফাংশন
int main() {
    int vertices = 5; // গ্রাফে ভেরটেক্স সংখ্যা

    struct Graph* graph = createGraph(vertices);

    // এজ যোগ করা
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // গ্রাফ প্রিন্ট করা
    printGraph(graph);

    return 0;
}
