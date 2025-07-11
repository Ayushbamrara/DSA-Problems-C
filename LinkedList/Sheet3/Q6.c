#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *remove(struct node *head, int target){
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *temp = NULL;

    if(curr == NULL || curr->next  == NULL ){
        return head;
    }

    while(curr != NULL){
            if(curr == target){
                temp = curr;
                curr = curr->next;
                free(temp);
            }
            prev = curr;
            curr = curr->next; 
        }
}

void display(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
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
    int x;
    printf("Enter target to remove");
    scanf("%d", &x);
    temp = remove(f, x);
    display(temp);
}
