#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node* insert_at_beginning(struct node *head) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return head;
    }

    printf("Enter value to insert at beginning: ");
    scanf("%d", &newNode->data);

    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    return newNode;
}


struct node* insert_at_end(struct node *head) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return head;
    }

    printf("Enter value to insert at end: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        return newNode;
    }

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}


void display(struct node *head) {
    struct node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct node *head = NULL;
    head =  insert_at_beginning(head);
    head =  insert_at_beginning(head);
    head =  insert_at_beginning(head);
    head =  insert_at_end(head);
    head =  insert_at_end(head);
    display(head);

    return 0;
}
