#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

void main(){
    struct node *list1 , *list2, *temp , *temp2, *temp3,*a , *b, *c;
    list1 = (struct node*) malloc (sizeof(struct node));
    printf("Enter head of list 1 : ");
    int l1 = 0;
    scanf("%d", &list1->data);
    list1->next = NULL;
    printf("Enter the no. of nodes : ");
    scanf("%d",&l1);
    temp = list1;
    for(int i=1; i<l1; i++){
        a = (struct node *) malloc(sizeof(struct node));
        printf(" Enter the values : ");
        scanf("%d",&a->data );
        temp->next = a;
        temp = a; 
    }
    temp->next = NULL;

    temp = 
    list2 = (struct node*) malloc (sizeof(struct node));          //list2
    printf("Enter head of list 2 : ");
    int l2 = 0;
    scanf("%d", &list2->data);
    list2->next = NULL;
    printf("Enter the no. of nodes : ");
    scanf("%d",&l2);
    temp = list2;
    for(int i=1; i<l2; i++){
        b = (struct node *) malloc(sizeof(struct node));
        printf(" Enter the values : ");
        scanf("%d",&b->data );
        temp->next = b;
        temp = b; 
    }
    temp->next = NULL;
    printf("First list is : \n");
    temp = list1;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("Second list is : \n");
    temp = list2;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    temp = list1;
    temp2 = list2;
    struct node* head3 = NULL;

    head3 = temp->data;
    temp = temp->next;
    temp3 = head3;

    for(int i = 1; i<l1+l2 ; i++){
        c = (struct node*) malloc (sizeof(struct node));
        temp3 -> next = c;
        temp3->data = temp2->data;
        temp3 = temp3->next;
        temp2 = temp2->next;
        temp3->data = temp->data;
        temp3 = temp3->next;
        temp = temp->next;

    }
    while(temp2 != NULL){
        temp3->data = temp2->data;
        temp = temp->next;
    }

    temp3 = head3;
    while(temp3 != NULL){
        printf("%d", temp3->data);
        temp3 = temp3->next;
    }

}