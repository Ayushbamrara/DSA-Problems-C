#include<stdio.h>
void main(){
    int a[6] = {3,-2,5,-4,4,-1};
    int next= 0; int prev;
    for(int i = 0;i<6;i+2){
        if(a[i]>next){
            prev = next;
            next = a[i];
        } else{
            int temp = prev;
            prev = next;
            next = temp;
        }
    }
    for(int i=0;i<6;i++){
        printf("%d",a[i]);
    }
}