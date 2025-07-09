// Input = [ 1,2 ,3,4] node to delete - 3    output = [1 ,2 ,4]

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *delete_n (struct node *f, int target) {
    struct node *temp = f;
    struct node *prev = NULL;
    while (temp != NULL) {
        if (temp->data == target) {
            if (prev == NULL) {
                f = temp->next;
                free(temp);
                return f;
            } else {
                prev->next = temp->next;
                free(temp);
                return f;
            }
        }
        prev = temp;
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
    int target = 0;
    printf("Enter target to delete : ");
    scanf("%d", &target);
    delete_n(f , target);
    temp = f;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}