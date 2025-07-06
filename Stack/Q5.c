#include<stdio.h>
void main(){
    int a[5] = { 4,5,6,2,1};
    int stack[5];
    int top = -1;
    for(int i=0;i <5;i++){
        stack[++top] = a[i];
    }
    int greatest = stack[top];
    int Nextsamllest = 0;
    for(int i = top-1 ;i >=0; i-- ){
        if(stack[i] > greatest){
            Nextsamllest = greatest;
            greatest = stack[i];
        } else if (stack[i] < greatest && stack[i] > Nextsamllest) {
            Nextsamllest = stack[i];
        }
    }
    top = -1;
    stack[++top] = Nextsamllest;
    printf("%d",stack[top]);
}