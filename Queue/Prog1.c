#include<stdio.h>
void main(){
    int max = 5;
    int Q[max];
    int f=-1,r= -1,ch=0,x=1;
    while(x==1){
    printf("Press 1: Enqueue \n2.Dequeue\n 3.Traversing\n");
    scanf("%d",&ch);
    if(ch == 1){
        if(r == max-1){
            printf("\nQueue is full \n");
        }
        else if(f==-1 && r==-1){
            f=r= 0;
            printf("\nEnter Value\n");
            scanf("%d",&Q[r]);
        } else if(r<max-1){
            r++;
            printf("\n enter the value \n");
            scanf("%d",&Q[r]);
        } else{
            printf("\nQueue is full\n");
        }
    }
    if(ch == 2){
        if(f==-1 && r == -1){
            printf("Queue is Empty");
        } else if(f == r){
            printf("\n Element deleted %d \n" , Q[f] );
            f=r=-1;
        } else{
            printf("\n Element deleted %d \n" , Q[f] );
            f++;
        }
    }
    if(ch == 3){
        if(f == -1 && r == -1){
            printf("\nQueue is Empty Cannot print \n");
        }
        else {
        for(int i=f;i<=r;i++){
            printf("%d\n",Q[i]);
        }
    }
    }
    printf("\n Press1 to continue and any other ley to exit \n");
    scanf("%d", &x);
}

}
