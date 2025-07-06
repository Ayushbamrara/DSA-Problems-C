#include<stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50};
    int *p = arr;
    *(p+2) = *(p+1) + *(p+3);
    printf("%d",arr[2]);
}