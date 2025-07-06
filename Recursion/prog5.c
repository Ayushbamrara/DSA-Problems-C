#include<stdio.h>
void show(int n){
    if(n>0){
        show(n-1);
        printf("%d",n);
        show(n-1);
    }
}
void main(){
    show(3);
}