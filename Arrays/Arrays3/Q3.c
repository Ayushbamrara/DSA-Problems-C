#include<stdio.h>
void main(){
    int arr[5] = {1,2,4,5};
    int n = 4;
    int target = 3;
    int i = 0;
    while(i<n){
        if(arr[i] == target){
            printf("Element found at : %d",i);
            break;
        } else if(arr[i] > target){
            printf("Element insertion position : %d",i);
            break;
        }
        i++;
    }
    if(arr[i] < target){
        printf("Instertion positon  : %d",i+1);
    }   

}