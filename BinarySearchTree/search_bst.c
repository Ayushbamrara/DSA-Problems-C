#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left , *right;
};

struct node* create(int x){
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *insert(struct node *nn, int val)
{
    if(nn == NULL){
        nn = create(val);  
    }
    else if (val < nn->data){
        nn->left = insert(nn->left , val);
    }
    else if(val >= nn->data){
        nn->right = insert(nn->right, val);
    }
    return nn;
}

struct node *search(struct node *nn, int val){
    if(nn == NULL || nn->data  == val){
        return nn;  
    }
    else if (val < nn->data){
        return  search(nn->left , val);
    }
    else if(val >nn->data){
        return search(nn->right, val);
    }
}

void inorder(struct node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}


void main(){
    struct node *root;
    root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,40);
    inorder(root);
    int x;
    printf("\n Enter the number to be found : ");
    scanf("%d", &x);
    struct node *temp = search(root,x);
    if(temp != NULL){
        printf("Element Found");
    }
    else {
        printf("Element not found ");
    }
}