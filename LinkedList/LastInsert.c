#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main(){
    struct node *f , *l, *temp, *z;
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
    temp = f;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    

    z = (struct node *) malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d", &z->data);
    z->next =  NULL;

    temp = f;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = z;
    
    temp = f;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }


}

