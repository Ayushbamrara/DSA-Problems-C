#include<stdio.h>

void main(){
    int max = 5;
    int cp[max];
    int f=-1,r-1,ch=0,x=1;

    while(x==1){
    printf("\npress1: \n1:Enqueue \n2:dequeue \n3.display");
    scanf("%d",&ch);
    if(ch == 0){
        if((f=0 && r= = max-1) || (r+1 == f))
        {
            printf("Queue is  full");
        }
        else if(f == -1 && r == -1){
            f=r=0;
            printf("Enter value");
            scanf("%d", &cq[r]);
        }
        else if(r = max-1){
            r= 0;
            printf("Enter a value");
            scanf("%d",&cq[r]);
        } else{
            r++;
            printf("Enter a value");
            scanf("%d",&cp[r]);
        }
    }
    if(ch==2){
        if(f== -1 && r == -1){
            printf("\n Queue is Empty \n");
        }
        else if(f == r){
            printf("Deleted element is : %d \n",cp[f]);
            f=r=-1;
        }
        else if(f == max-1){
            printf("Deleted Element is : %d \n",cp[f]);
            f=0;
        } else {
            printf("Deleted element is %d \n", cp[f]);
        }
    }
    if(ch == 3){
        int i=f;
        while(i!=r){
            printf("%d",cq[i]);
            i=(i+1)%max;
        }
        printf("%d",cq[r]);
    }
    printf("\n press 1 to continue and press any key to exit");
    scanf("%d",&x);
}
}
