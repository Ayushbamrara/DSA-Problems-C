#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *addr;
};

void main(){
    struct node *f , *l, *temp;
    f = (struct node *) malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d", &f->data);
    f->addr =  NULL;
    temp = f;
    int n = 0;
    printf("Enter number of nodes");
    scanf("%d", &n);
    temp = f;
    for(int i = 1; i<n ; i++){
        l = (struct node *) malloc(sizeof(struct node));
        printf(" Enter value ");
        scanf("%d",&l->data);
        l->addr = NULL;
        temp -> addr = l;
        temp = l;

    }
    temp = f;
    int max = temp->data;
    int min = temp->data;
    temp = temp->addr;
    while(temp != NULL){
        if(max < temp->data){
            max = temp->data;
        }
        else if(min > temp->data){
            min = temp->data;
        }
        temp = temp->addr;
    }
    printf("Max Element is %d /n", max);
    printf("Min Element is %d /n", min);
}

