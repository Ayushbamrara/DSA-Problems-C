// Q3 - WAP to build a function void check(int *n, int *c) to check no.is prime or not

#include<stdio.h>
void check(int *n, int *c){
    if(*n == 0 || *n==1){
        c = 1;
    }
    for(int i=2;i<*n/2;i++){
        if(*n%i == 0){
            *c =1;
        }
    }
    if(*c == 0){
        printf("its a prime number");
    }
    else{
        printf("its a non prime number");
    }
}

void main(){
    int n = 5;
    int c = 0;
    check(&n,&c);

}
