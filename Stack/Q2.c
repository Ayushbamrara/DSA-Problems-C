#include<stdio.h>
void main(){
    int a[5] = { 4,5,6,2,1};
    int stack[5];
    int top = -1;
    for(int i=0;i <5;i++){
        stack[++top] = a[i];
    }
    int greatest = stack[top];
    int gratest = stack[top];
    for(int i = top-1 ;i >=0; i-- ){
        if(stack[i] > greatest){
            
            greatest = stack[i];

        }
    }
    top = -1;
    stack[++top] = greatest;
    printf("%d",stack[top]);
}