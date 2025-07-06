#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *delete_from_begin(struct node *h){
    
    if(h == NULL ){
        printf("List is already empty");
        return NULL ;
    }
    struct node *temp;
    temp = h;
    h = h->next;
    free(temp);
    return h;
}


int main(){
    struct node *head;
    head = NULL;
    head  = delete_from_begin(head);
    printf("%d",head);
}