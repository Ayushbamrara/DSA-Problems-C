#include<stdio.h>
void main(){
    int stock[6] = {7,1,5,6,4};
    int minprice = stock[0];
    int maxprofit = 0;
    for(int i= 1; i<6;i++){
        if(stock[i] < minprice){
            minprice = stock[i];
        }
        int profit  = stock[i] - minprice;
        if(profit > maxprofit){
            maxprofit = profit;
        }
    }
    printf("maximum profit is : %d", maxprofit);
}