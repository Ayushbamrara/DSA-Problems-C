#include<stdio.h>
void main(){
    int size;
    printf("Enter the Size : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements : ");
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    int evensum = 0, oddsum = 0;
    for(int i = 0; i<size; i++){
        if(a[i]%2 == 0){
            evensum += a[i];
        } else{
            oddsum += a[i];
        }
    }
    printf("Even Number sum is : %d \n",evensum);
    printf("Odd Number sum is : %d",oddsum);
}