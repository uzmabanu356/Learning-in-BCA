#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct
 
Node* next;
};

// Function to create a new node

struct Node* createNode(int data)
 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to delete the last node
void deleteLastNode(struct Node** head) {
    if (*head == NULL) {  // Check for empty list
        printf("List is empty.\n");
        return;
    }

    struct Node* current = *head;
    struct Node* prev = NULL;

    // Traverse to the second last node
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }

    // If there's only one node, update the head
    if (prev == NULL) {
        *head = NULL;
    } else {
        prev->next = NULL;  // Detach the last node
    }

    free(current);  // Free the memory of the deleted node
}

// Function to print the linked list

void printList(struct Node* head)
 
{
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
 
{
	clrscr();
    struct
 
Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    printf("Original list: ");
    printList(head);

    deleteLastNode(&head);

    printf("List after deleting last node: ");
    printList(head);
     getch();
    return 0;
}