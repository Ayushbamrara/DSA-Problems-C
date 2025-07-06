#include<stdio.h>
void reverse(int stack[], int a[]){
    int top = -1;
     for (int i = 0; i < 5; i++) {
        top++;
        stack[top] = a[i];
    }
    for (int i = 0; i < 5; i++) {
        a[i] = stack[top];
        top--;
    }
    for(int i = 0;i < 5; i++){
        printf("%d",a[i]);
    }
}

void main(){
    int a[5] = {1,2,3,4,5};
    int top = -1;
    int stack[5];
    reverse(stack,a);
}