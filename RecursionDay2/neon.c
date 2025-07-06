#include<stdio.h>

int neon(int n){
    if(n == 0){
        return 0;
    } else {
        return n%10 + neon(n/10);
  }
}

void main(){
    int n = 9;
    int sq = n * n;
    int x = neon(sq);
    if( x == n){
        printf("Neon no.");
    }
    else {
        printf("Not a neon no.");
    }
    printf("%d", x);
}