#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node  *left, *right;
};

struct node *create (){
    int x;
    struct node *temp;
    temp = (struct node *)malloc (sizeof(struct node));
    printf("Enter  a value : (enter -1 to input null)");
    scanf("%d",&x);
    if(x == -1){
        return NULL;
    }
    temp ->data = x;

    printf("\nEnter the left child of %d ",x);
    temp->left = create();
    printf("\nEnter the right child of %d",x);
    temp->right = create(); 
    return temp;
}

int main(){
    struct node *root;
    root = NULL;
    root = create();
}