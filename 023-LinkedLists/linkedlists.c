#include <stdio.h>
#include <stdlib.h>

// Define a node structure for a linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a new node at the beginning of the linked list
struct Node *insertNode(struct Node *head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// Function to display the linked list
void displayList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize an empty linked list
    struct Node *head = NULL;

    // Insert nodes into the linked list
    head = insertNode(head, 3);
    head = insertNode(head, 7);
    head = insertNode(head, 11);

    // Display the linked list
    printf("Linked List: ");
    displayList(head);

    return 0;
}
