#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main(){
    struct node *f , *l, *temp, *temp2, *temp3,*m, *n, *e=NULL;
    f = (struct node *) malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d", &f->data);
    f->next =  NULL;
    temp = f;
    int k = 0;
    printf("Enter number of nodes");
    scanf("%d", &k);
    temp = f;
    for(int i = 1; i<k ; i++){
        l = (struct node *) malloc(sizeof(struct node));
        printf(" Enter value ");
        scanf("%d",&l->data);
        l->next = NULL;
        temp -> next = l;
        temp = l;

    }
    m = (struct node *) malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d", &m->data);
    m->next =  NULL;
    int j = 0;
    printf("Enter number of nodes");
    scanf("%d", &j);
    temp2 = m;
    for(int i = 1; i<j ; i++){
        n = (struct node *) malloc(sizeof(struct node));
        printf(" Enter value ");
        scanf("%d",&n->data);
        n->next = NULL;
        temp2->next = n;
        temp2 = n;

    }


    temp = f;
    printf("first LL \n");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n second LL \n");

    temp2 = m;
    while(temp2 != NULL){
        printf("%d ",temp2->data);
        temp2 = temp2->next;
    }
    temp = f;
    temp2 = m;
    temp3 = e;
   while(temp != NULL && temp2 != NULL){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = temp->data + temp2->data;

    newNode->next = NULL;
    if (e == NULL) {
         e = temp3 = newNode;
    } else {
        temp3->next = newNode;
        temp3 = newNode;
    }
    temp = temp->next;
    temp2 = temp2->next;

   }
  printf("\n Sum OF 1 And 2 \n");
    temp3 = e;
    while(temp3 != NULL){
        printf("%d ", temp3->data);
        temp3 = temp3->next;
    }

}

