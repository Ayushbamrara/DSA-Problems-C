#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
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

int main(){
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
    struct node *reverse = reverseLL(f);
    struct node *temp2 =  reverse;
    int x=0;
    printf("Enter Nth node from last you want to ");
    scanf("%d",&x);
    int count = 1;
    while(temp2 != NULL){
        if(count == x){
            printf("%d",temp2->data);
            return 0;
            
        }
        count++;
        temp2 = temp2->next;
    }
    return 0;
}