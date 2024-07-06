#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
	head = newNode;
    } else {
	newNode->next = head;
	head = newNode;
    }
    return head;
}
void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
	printf("%d -> ", current->data);
	current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    for (int i = 5; i >= 1; i--) {
	head = insertAtBeginning(head, i);
    }
    printf("Linked List: ");
    printLinkedList(head);

    getch();
    return 0;
}
