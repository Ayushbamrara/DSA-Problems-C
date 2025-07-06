#include<stdio.h>
int* getelement(int *arr,int index){
    return arr + index;
}
void main(){
    int arr[] = {10,20,30,40,50};
    int *ptr = getelement(arr,2);
    printf("%d",*ptr);
}