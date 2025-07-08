#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node * insert_at_beg(struct node *h){
    struct node *temp;
    temp = (struct node*) malloc (sizeof(struct node));
    if(temp == NULL){
        printf("Memory not available \n");
    } else{
        printf("Enter a value : ");
        scanf("%d", &temp->data);
        temp->next = NULL;
        temp->next = h;
        h = temp;
    }
    return h;
}

struct node * insert_at_last (struct node *h){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Memory not available");
    }
    else if(h == NULL){
        printf("Enter a value");
        scanf("%d",&temp->data);
        temp->next = NULL;
        h =  temp;
    }
    else{
        printf("Enter a value");
        scanf("%d",&temp->data);
        temp->next = NULL;
        struct node *p1;
        p1 = h;
        while(p1->next != NULL){
            p1 = p1->next;
        }
        p1->next=temp;
        p1 = temp;
    }
    return h;
}

struct node *delete_from_begin(struct node *h){
    
    struct node *temp;
    if(h == NULL ){
        printf("List is already empty");
        return NULL ;
    }
    temp = h;
    h = h->next;
    free(temp);
    return h;
}

struct node *delete_from_last(struct node *h){
    struct node *temp;
    struct node *last;
    if(h == NULL){
        printf("List is already empty");
        return NULL;
    }
    temp = h->next;;
    last = h;
    while(temp->next!= NULL){
        last = last->next;
        temp = temp->next;
    }
    last->next = NULL;
    free(temp);
    return h;

}

void display(struct node *t){
    while(t != NULL){
        printf("%d ", t->data);
        t = t->next;
    }
}

void main(){
    struct node *head;
    head = NULL;
    head = insert_at_last(head);
    head = insert_at_last(head);
    head = insert_at_last(head);
    head = delete_from_last(head);
    display(head);
}

