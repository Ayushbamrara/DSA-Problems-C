#include<stdio.h>
void countEvenOdd(int *arr, int size, int *even, int *odd){
    *even = 0;
    *odd = 0;
    int *ptr = arr;
    for(int i=0; i<size; i++){
        if(*(arr + i) % 2 == 0){
            (*even)++;
        }
        else{
            (*odd)++;
        }
    }
    printf("Even No. are %d \n Odd Counts are %d \n ",*even, *odd);
}

void main(){
    int size;
    printf("Enter Size : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int even , odd;
    countEvenOdd(arr,size,&even,&odd);

}