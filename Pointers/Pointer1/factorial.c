#include<stdio.h>
void fact(int *n, int *result){
    *result = 1;
    for(int i=1; i<=n; i++){
       *result *= i;
    }
}

void main(){
    int n = 5;
    int result;
    fact(n, &result);
    printf("%d",result);
}
