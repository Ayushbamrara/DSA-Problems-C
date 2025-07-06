#include<stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    else {
        return n%10* n%10 + sum(n/10);
    }
}
void  main(){
    int num = 123;
    int x = sum(num);
    printf("%d",x);
}