// input l1 = 1->2->3  l2 = 4->5->6             output 1->6->2->5->3->4

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
    struct node *l1 , *l, *temp , *l2 , *f, *temp2 , *head3;
    l1 = (struct node *) malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d", &l1->data);
    l1->next =  NULL;
    
    temp = l1;
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

    l2 = (struct node *) malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d", &l2->data);
    l2->next =  NULL;
    
    temp = l2;
    int m = 0;
    printf("Enter number of nodes");
    scanf("%d", &m);

    for(int i = 1; i<m ;i++){
        f = (struct node *) malloc(sizeof(struct node));
        printf(" Enter value ");
        scanf("%d",&f->data);
        f->next = NULL;
        temp -> next = f;
        temp = f;
    }

    l2 = reverseLL(l2);

    temp = l1;
    temp2 = l2;
    

    while(temp->next != NULL ){
        temp = temp->next;
    }
    temp->next = temp2;
    
    temp = l1;
    display(temp);
}
