#include<stdio.h>
void main(){
    int size;
    printf("Enter first Array size\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter first Array elements");
    for(int i = 0; i<size; i++){
        scanf("%d",&a[i]);
    }
    int secLargest;
    int largest = 0;
    for(int i=0;i<size;i++){
        if(a[i]>largest){
            secLargest = largest;
            largest = a[i];
        } else if(a[i]>secLargest){
            secLargest = a[i];
        }
    }
    printf("Second Largest Element is: %d",secLargest);
}