#include<stdio.h>

void push(int stack[], int max,int *top){
    if(*top == max-1){
        printf("Stack Overflow \n");
    } else{
        (*top)++;
        printf("Enter new value \n");
        scanf("%d",&stack[*top]);
    }
}


void pop(int stack[], int *top){
    if(*top == -1){
        printf("Stack Underflow ");
    }
    else {
        printf("The deleted Element is %d", stack[*top]);
        (*top)--;
    }
}
void traversing(int stack[], int top){

    if(top == -1){
        printf("\n stack is empty");
    } else {
        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
        }
    }
}

int main(){
    int max = 5;
    int stack[max];
    int top = -1;
    int x=1;
    while(x==1){
         int ch;
    printf("enter the choice:");
    scanf("%d",&ch);
    if(ch == 1){
        push(stack, max,&top);
    } else if(ch ==2){
        pop(stack,&top);
    } else if(ch == 3){
        traversing(stack,top);
    } else {
        printf("Invalid Input ! Try Again");
    }
    printf("Press 1 to continue or press any key to exit ");
    scanf("%d",&x);
    }
}
