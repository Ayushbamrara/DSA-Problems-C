#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* createNode(int val) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

struct node *dublicate_II(struct node*head){
    struct ListNode* prev = createnode(0);
    struct node * curr = head;
    
    if(curr == NULL || curr->next == NULL){
        return curr;
    }
    struct node *last = curr->next;
    while(curr != NULL){
        if(curr == last){
            curr = last;
            last = last->next;
        }
        else {
            prev = last;
        }
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
    dublicate_II(f);
}