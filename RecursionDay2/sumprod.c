#include<stdio.h>

int sum(int n){
    if(n == 0){
        return 0;
    } else{
        int r = n %10;
        return r + sum(n/10);
    }
}

int prod(int n){
    if(n == 0){
        return 1;
    } else{
        int p = n %10;
        return p*prod(n/10);
    }
}

void main(){
    int n = 1124;
    int x = sum(n);
    int y = prod(n);
    if(x == y){
        printf("Spy number %d", n);
    } else{
        printf("Not a SPY no.");
    }
}