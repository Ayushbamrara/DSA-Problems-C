#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *addr;
};

void main(){
    struct node *f, *s, *t, *l, *temp;                 //*f is pointer so -> sign is used.          
    f = (struct node*)malloc(sizeof(struct node));
    f -> data = 10;
    f -> addr = NULL;
  
    s = (struct node*)malloc(sizeof(struct node));
    s -> data = 20;
    s -> addr = NULL;

    t = (struct node*)malloc(sizeof(struct node));
    t -> data = 30;
    t -> addr = NULL;

    l = (struct node*)malloc(sizeof(struct node));
    l -> data = 40;
    l -> addr = NULL;

    f->addr = s;
    s-> addr = t;
    t ->addr = l;

    temp = f;
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp->addr;
    }
    
}
    
