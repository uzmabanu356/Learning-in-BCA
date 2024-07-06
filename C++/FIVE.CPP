#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node { int data; struct Node* next; };
struct Node new_node;
struct Node* insertAtBeginning(struct Node** head_ref, int new_data) {
    new_node =(struct node *) (malloc(sizeof(struct Node)));
    if (!new_node) return *head_ref;
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
    return *head_ref;
}

void printList(struct Node* head) {
    while (head) printf("%d -> ", head->data), head = head->next;
    printf("NULL\n");
}

int main() {
     clrscr();
    int main() {
    struct Node* head = NULL;
    int i;
    for (i = 0; i < 5; i++) scanf("%d", &head = insertAtBeginning(&head, i));
    printList(head);
    getch();
    return 0;
	
}
