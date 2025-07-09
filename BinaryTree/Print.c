#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node  *left, *right;
};

void preorder(struct node *temp){
    if(temp == NULL){
        return;
    }
    printf("%d",temp->data);
    preorder(temp->left);
    preorder(temp->right);
}


void inorder(struct node *temp){
    if(temp == NULL){
        return;
    }
    inorder(temp->left);
    printf("%d",temp->data);
    inorder(temp->right);
}

void postorder(struct node *temp){
    if(temp == NULL){
        return;
    }
    postorder(temp->left);
    preorder(temp->right);
    printf("%d",temp->data);
}


struct node *create (){
    int x;
    struct node *temp;
    temp = (struct node *)malloc (sizeof(struct node));
    printf("\nEnter  a value : (enter -1 to input null)");
    scanf("%d",&x);
    if(x == -1){
        return NULL;
    }
    temp ->data = x;

    printf("\nEnter the left child of %d  ",x);
    temp->left = create();
    printf("\nEnter the right child of %d  ",x);
    temp->right = create(); 
    return temp;
}

int main(){
    struct node *root;
    root = NULL;
    root = create();
    printf("\n PreOrder is : ");
    preorder(root);
    printf("\n InOrder is : ");
    inorder(root);
    printf("\n PostOrder is : ");
    postorder(root);
}