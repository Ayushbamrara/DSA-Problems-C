#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node  *next;
};

struct node* reverseLL(struct node *h){
    struct node *curr, *prev = NULL, *last = NULL;
    curr = h;
    while(curr != NULL){
        last = curr->next;
        curr->next = prev;
        prev = curr;
        curr = last;

    }
    return prev;
}


void display(struct node *t){
    while(t != NULL){
        printf("%d ", t->data);
        t = t->next;
    }
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

    for(int i = 1; i<n ;i++){
        l = (struct node *) malloc(sizeof(struct node));
        printf(" Enter value ");
        scanf("%d",&l->data);
        l->next = NULL;
        temp -> next = l;
        temp = l;
    }

    printf("Normal LL  : \n");
    display(f);
    printf("\n Reversed LL : \n");
    f = reverseLL(f);
    display(f);
    



}