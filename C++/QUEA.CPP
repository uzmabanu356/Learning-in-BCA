#include <stdio.h>
#include<conio.h>
#define MAX_SIZE 5

// Structure to represent a queue
struct Queue {
    int front, rear;
    int arr[MAX_SIZE];
};

// Function to initialize an empty queue
void initializeQueue(struct Queue *q) {
    q->front = q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *q) {
    return (q->front == -1 && q->rear == -1);
}

// Function to check if the queue is full
int isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

// Function to insert an element into the queue
void enqueue(struct Queue *q, int value) {
    // Check if the queue is full
    if (isFull(q)) {
        printf("Queue is full. Cannot insert element.\n");
        return;
    }

    // If the queue is empty, set front and rear to 0
    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        // Increment the rear and insert the element
        q->rear++;
    }

    q->arr[q->rear] = value;
    printf("Element %d inserted into the queue.\n", value);
}

// Function to display the elements in the queue
void displayQueue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Elements in the queue: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

int main() {
    clrscr();
    struct Queue q;

    // Initialize an empty queue
    initializeQueue(&q);

    // Insert elements into the empty queue
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    // Display the elements in the queue
    displayQueue(&q);

    getch();
    return 0;
}