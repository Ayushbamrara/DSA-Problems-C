#include<stdio.h>
void main(){
    int digits[3] = {7,9,9};
    int carry = 1;
    int len = 2;
    while(len>=0){
        int sum = digits[len] + carry;
        digits[len] = sum % 10;
        carry = sum / 10;
        len--;
    }
    if(carry == 1){
        printf("%d",1);
    }
    for(int i=0;i<3;i++){
        printf("%d",digits[i]);
    }

}