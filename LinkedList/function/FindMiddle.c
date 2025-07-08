#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node  *next;
};

struct node* FindMiddle(struct node *h){
    struct node *slow, *fast;
    slow =  h;
    fast = h->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    printf("%d",slow->data);
    return slow;
}


void main(){
    struct node *l1 , *l, *temp ;
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
    FindMiddle(l1);

}