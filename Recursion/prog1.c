#include<stdio.h>
void show(int n){
    if(n<=10){
        printf("\n %d ",n);
        show(n+1);
    }
    
}
void main(){
    show(1);
}