#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main(){
    struct node *f , *l, *temp, *prev;
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
    int count = 0;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    
    temp = f;
    int mid  = count/2;
    prev = NULL;
     for (int i = 0; i < mid; i++) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    
    temp = f;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

}


