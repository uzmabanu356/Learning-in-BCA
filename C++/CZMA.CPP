#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node* insertInOrder(Node* head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL || data < head->data) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL && current->next->data < data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    return head;
}

void displayList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void main() {
    Node* head = NULL;
    int choice, data;
    clrscr();

    while (1) {
        printf("\n1. Insert an element\n2. Display list\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &data);
                head = insertInOrder(head, data);
                break;
            case 2:
                if (head == NULL) {
                    printf("List is empty.\n");
                } else {
                    printf("List elements: ");
                    displayList(head);
                }
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    getch();
}

