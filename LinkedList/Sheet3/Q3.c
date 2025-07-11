#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *middle(struct node *head){
    struct node *slow= head;
    struct node *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


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
    struct node *mid  = middle(f);
    struct node *secondhalf = reverseLL(mid);
    struct node *firsthalf = f;

    int flag = 0;
    while(secondhalf != NULL){
        if(firsthalf->data != secondhalf->data){
            flag = 1;
        }
        firsthalf = firsthalf->next;
        secondhalf = secondhalf->next;
    }
    if(flag == 1){
        printf("Linked List is not Palaindrome");
    } else {
        printf("Linked List Is Palaindrome");
    }

}

