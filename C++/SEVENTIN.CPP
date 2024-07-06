#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert an element at the first position
struct Node* insertFirst(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode; // Point to itself if the list is empty
    } else {
        newNode->next = head->next; // Point to the current first node
        head->next = newNode; // Update head to point to the new first node
    }

    return newNode; // Return the new head
}

// Function to insert an element between two elements
void insertBetween(struct Node* head, int value, int afterValue) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node* current = head;
    while (current->data != afterValue) {
        current = current->next;
        if (current == head) {
            printf("Element %d not found in the list.\n", afterValue);
            free(newNode);
            return;
        }
    }

    newNode->next = current->next; // Point to the next node
    current->next = newNode; // Update current node to point to the new node
}

// Function to traverse and display the circular linked list
void traverse(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* current = head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("(head)\n");
}

int main() {
    clrscr();
    struct Node* head = NULL;

    // Inserting elements at the first position
    head = insertFirst(head, 10);
    head = insertFirst(head, 20);
    head = insertFirst(head, 30);

    // Display the circular linked list
    printf("Circular Linked List after inserting at the first position:\n");
    traverse(head);

    // Inserting an element between two elements
    insertBetween(head, 25, 20);

    // Display the circular linked list again
    printf("\nCircular Linked List after inserting between two elements:\n");
    traverse(head);

    getch(); // Wait for a key press before exiting
    return 0;
}