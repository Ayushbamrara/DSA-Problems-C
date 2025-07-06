#include<stdio.h>
    void main(){
    int max = 5;
    int dq[max];
    int f = -1,  r = -1, ch = 0, x =1;
    
    while(x==1){
    printf("\n1.Insertion from front \n2.Insertion from rear \n3.Deletion from front \n4.Deletion from rear\n5.display");
    scanf("%d",&ch);
    if(ch==1){
        printf("\n---------- Insertion From Front ------------");
        if((f==0 && r ==max-1) || (r+1 == f)){
            printf("\n Queue is full");
        }
        else if(f == -1 && r == -1){
            f=r=0;
            printf("\nEnter a value");
            scanf("%d", &dq[f]);
        }
        else if(f == 0){
            f = max-1;
            printf("\nEnter a value");
            scanf("%d", &dq[f]);
        } 
        else{
            f--;
            printf("\nEnter a value");
            scanf("%d", &dq[f]);
        }
    }

    if(ch == 2){
        printf("\n------------- Insertion from rear -------------");
                 if((f==0 && r==max-1) || (r+1==f))
                {
                    printf("\nQueue is full");
                }
                else if(f==-1 && r==-1)
                {
                    f=r=0;
                    printf("\nEnter a value");
                    scanf("%d",&dq[r]);
                }
                else if(r==max-1)
                {
                    r=0;
                    printf("\nEnter a value");
                    scanf("%d",&dq[r]);
                }
                else
                {
                    r++;
                    printf("\nEnter a value");
                    scanf("%d",&dq[r]);
                }
    }

    if(ch == 3){
        printf("\n----------Deletion from front--------------");
        if(f == -1 && r == -1){
            printf("\n Queue is empty");
        }
        else if( f == r){
            printf("\nDeleted element is : %d", dq[f]);
            f=r=-1;
        }
        else if(f == max -1){
            printf("\nDeleted element is : %d", dq[f]);
            f = 0;
        } else {
            printf("\nDeleted element is : %d", dq[f]);
            f++;
        }
    }
    if(ch == 4){
        printf("\n------------- Deletion from rear ------------");
        if(f == -1 && r == -1){
            printf("\n Queue is empty");
        }
        else if( f == r){
            printf("\nDeleted element is : %d", dq[r]);
            f=r=-1;
        }
        else if(r == 0){
            printf("\nDeleted element is : %d", dq[r]);
            r = max -1;
        }
        else{
            printf("\nDeleted element is : %d", dq[r]);
            r--;
        }
    }
    if(ch == 5){
        int i = f;
        while(i!=r){
            printf("%d ",dq[i]);
            i = (i+1)%max;
        }
        printf("%d ",dq[r]);
    }
    printf("\nPress 1 to cont... any key to exit");
    scanf("%d",&x);
}
}