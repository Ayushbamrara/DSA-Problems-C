#include<stdio.h>
int count(int n){
    if(n/10 == 0){
        return 1;
    }
    else{
        return 1 + count(n/10);
    }
    return 0;

}

void main(){
    int res = count(456);
    printf("count of number is %d",res);
}