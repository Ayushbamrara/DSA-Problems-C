#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *detectLoop(struct node *head) { 
    struct node *slow = head;
    struct node *fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            printf("Loop Detected at value: %d\n", slow->data);
            return slow; // loop detected
        }
    }

    printf("No loop detected.\n");
    return NULL;
}

void main(){
    struct node *f , *l, *temp;
    f = (struct node *) malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d", &f->data);
    f->next =  NULL;
    temp = f;
    int n = 0;
    printf("Enter number of nodes");
    scanf("%d", &n);
    temp = f;
    for(int i = 1; i<n ; i++){
        l = (struct node *) malloc(sizeof(struct node));
        printf(" Enter value ");
        scanf("%d",&l->data);
        l->next = NULL;
        temp -> next = l;
        temp = l;

    }

    detectLoop(f);
}
