#include<stdio.h>
void main(){
    int num1[6] = {1,2,3};
    int num2[3] = {2,4,6};
    int n = 3 , m = 3;
    int k = (n+m)-1;
    int x = n-1;
    int y = m-1;
    while(x>= 0  && y >= 0){
        if(num1[x] > num2[y]){
            num1[k] = num1[x];
            x--;
        } else {
            num1[k] = num2[y];
            y--;
        }
        k--;
    }
    while(y >= 0){
        num1[k] = num2[y];
        k--;
        y--;
    }
    for(int i=0; i<n+m; i++){
        printf("%d",num1[i]);
    }
}