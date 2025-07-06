#include<stdio.h>
void table(int n){
    int i =3;
    if(n<=10){
        printf("%d * %d = %d \n",i,n,i*n);

        table(n+1);
    }
}
void main(){
    table(1);
}