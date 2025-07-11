#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};


struct node * delete_dublicate(struct node *head){
    struct node *prev = head;
    struct node *curr = head->next;
    struct node *temp = NULL;

    while(curr != NULL){
        if(prev->data == curr->data){
            temp = curr;
            curr = curr->next;
            free(temp);
        } else {
            prev->next = curr;
            prev = curr; 
            curr = curr->next;
        }
        return head;
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
    temp = f;
    for(int i = 1; i<n ; i++){
        l = (struct node *) malloc(sizeof(struct node));
        printf(" Enter value ");
        scanf("%d",&l->data);
        l->next = NULL;
        temp -> next = l;
        temp = l;

    }
    delete_dublicate(f);
    temp = f;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}