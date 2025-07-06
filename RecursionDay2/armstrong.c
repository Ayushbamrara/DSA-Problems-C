#include<stdio.h>
#include<Math.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    else {
        return pow((n%10),3)+  sum(n/10);
    }
}
void  main(){
    int num = 153;
    int x = sum(num);
    if(x == num){
        printf("Number is Armstrong");
    }
    else {
        printf("Number is not Armstrong");
    }
}