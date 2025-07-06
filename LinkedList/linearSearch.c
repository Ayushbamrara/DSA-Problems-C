/* WAP to create a LL of number of nodes also input a number Now check if the number is  is present in the LL or not*/

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
    int target = 0;
    printf("ENter the target");
    scanf("%d",&target);
    temp = f;  

    int count = 0;
    while (temp != NULL){
        if(temp->data == target){
            count = 1;
            break;
        }
        temp = temp->addr;
    }
    if(count == 0){
        printf("Element not found");
    } else {
        pirntf("Element not found");
    }
}
