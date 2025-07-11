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

struct node* delete_from_beg(struct node* h) {
    if (h == NULL) {
        printf("List is empty.\n");
        return NULL;
    }
    struct node* temp = h;
    h = h->next;
    free(temp);
    return h;
}

struct node* delete_nth_node(struct node* h, int n) {
    if (h == NULL || n <= 0) {
        printf("Invalid position or empty list.\n");
        return h;
    }

    if (n == 1) {
        return delete_from_beg(h);
    }

    struct node* temp = h;
    for (int i = 1; temp != NULL && i < n - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range.\n");
        return h;
    }

    struct node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
    return h;
}

struct node* delete_from_end(struct node* h) {
    if (h == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    if (h->next == NULL) {
        // Only one node
        free(h);
        return NULL;
    }

    struct node* temp = h;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    return h;
}



void display(struct node *head) {
    struct node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}


int main() {
    struct node *head = NULL;
    head =  insert_at_beginning(head);
    head =  insert_at_beginning(head);
    head =  insert_at_beginning(head);
    head =  insert_at_end(head);
    head =  insert_at_end(head);
    head = delete_from_beg(head);
    head = delete_nth_node(head, 2);
    head = delete_from_end(head);
    display(head);

    return 0;
}
