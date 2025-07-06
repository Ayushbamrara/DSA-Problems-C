#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *addr;
};

void main(){
    struct node *f , *l, *m, *n, *temp;
    f = (struct node *) malloc(sizeof(struct node));
    printf("Enter first head value");
    scanf("%d", &f->data);
    f->addr =  NULL;
    temp = f;
    int k = 0;
    printf("Enter number of nodes");
    scanf("%d", &k);
    temp = f;
    for(int i = 1; i<k ; i++){
        l = (struct node *) malloc(sizeof(struct node));
        printf(" Enter value of %d is : ", i);
        scanf("%d",&l->data);
        l->addr = NULL;
        temp -> addr = l;
        temp = l;

    }

    m = (struct node *) malloc(sizeof(struct node));
    printf("Enter the head of second LL : ");
    scanf("%d", &m->data);
    m->addr =  NULL;
    int s = 0;
    printf("Enter number of nodes");
    scanf("%d", &s);
    temp = m;
    for(int i = 1; i<s ; i++){
        n = (struct node *) malloc(sizeof(struct node));
        printf(" Enter value of %d is : ", i);
        scanf("%d",&n->data);
        n->addr = NULL;
        temp -> addr = n;
        temp = n;

    }

    temp = f;
    while(temp->addr != NULL){
        temp = temp->addr;
    }
    temp->addr = m;
    
    temp = f;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->addr;
    } 
}

