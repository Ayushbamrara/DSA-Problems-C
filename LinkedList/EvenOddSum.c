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
    int evensum = 0, oddsum = 0;
    while(temp != NULL){
        if(temp->data %2 == 0){
            evensum += temp->data;
        } else {
            oddsum += temp->data;
        }
        temp = temp->addr;
    }
    printf("even sum is: %d", evensum);
    printf("odd sum is: %d",oddsum);
}

