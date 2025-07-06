#include<stdio.h>
int even(int n){
    if(n<=10){
    if(n%2 == 0){
        return n + even(n+2);
    }
    else{
        return even(n+1);
    }
}
return 0;
}
void main(){
int x = even(1);
printf("Sum of even is : %d ",x );
}