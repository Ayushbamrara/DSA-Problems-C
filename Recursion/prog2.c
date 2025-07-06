#include<stdio.h>
void show(int n){
    if(n<=20){
        if(n%2==0){
        printf("\n %d ",n);
        }
        show(n+1);
    }
    
}
void main(){
    show(1);
}