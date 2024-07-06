#include <stdio.h>
#include <conio.h>

struct Node {
    int data;
    struct
 
Node* next;
};

// Function to create a new node

struct Node* createNode(int data)
 
{
    struct
 
Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to find the minimum element in the linked list
int findMin(struct Node* head) {
    struct Node* current = head;
    int min = current->data; // Initialize min with the first node's data

    while (current != NULL) {
        if (current->data < min) {
            min = current->data;
        }
        current = current->next;
    }

    return min;
}

int main() {
	clrscr();
    struct Node* head = createNode(5);
    head->next = createNode(2);
    head->next->next = createNode(8);
    head->next->next->next = createNode(1);
    head->next->next->next->next = createNode(9);

    int minimum = findMin(head);

    printf("The minimum element in the linked list is: %d\n", minimum);
     getch();
    return 0;
}