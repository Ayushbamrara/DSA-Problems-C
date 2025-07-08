#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};


void displayForward(struct node *head) {
    struct node *temp = head;
    printf("\nList in forward direction: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        if (temp->next == NULL) break;  // stop at last node
        temp = temp->next;
    }
    printf("\n");
}

// Function to display list from tail to head
void displayBackward(struct node *tail) {
    struct node *temp = tail;
    printf("List in backward direction: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    struct node *head, *tail, *newNode;
    int n, i;

    head = (struct node*) malloc(sizeof(struct node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter value for node 1: ");
    scanf("%d", &head->data);
    head->next = NULL;
    head->prev = NULL;
    tail = head;

    printf("Enter number of total nodes: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        newNode = (struct node*) malloc(sizeof(struct node));
        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;

    }
    displayForward(head);
    displayBackward(tail);

    return 0;
}