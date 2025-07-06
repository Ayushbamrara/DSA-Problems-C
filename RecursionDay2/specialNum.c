#include<stdio.h>
int fact(int n){
    if(n == 0){
        return 1;
    } 
    else {
        return n * fact(n-1);
    } 
}

int sum(int n){
    if(n == 0){
        return 0;
    } else {
        return fact(n%10) + sum(n/10);
    }
}

void main(){
    int num = 145;
    int x = sum(num);
    if(x == num){
        printf("Number is special no.");
    }
    else {
        printf("Not special no.");
    }

}