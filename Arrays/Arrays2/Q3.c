#include<stdio.h>
void main(){
    int size =7;
    int a[7] = {1,0,2,0,3,0,4};
    int right = size-1;
    int left = right-1;
    for(int i=0; i<size-1; i++){
        if(a[right] != 0){
            right--;
            left--;
        }
        else if(a[left] == 0){
            left--;
        }
        else{
            int temp = a[right];
            a[right] = a[left];
            a[left] = temp;
            left--;
            right--;
        }
    }
    for(int i=0; i<size; i++){
        printf("%d",a[i]);
    }
}