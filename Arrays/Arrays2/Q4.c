#include<stdio.h>
void main(){
    int size;
    printf("Enter  Array size\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter  Array elements");
    for(int i = 0; i<size; i++){
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1; j<size;j++){
            if(sum<a[i]+a[j]){
                sum = a[i]+a[j];
            }
        }
    }
    printf("Maximum sum is : %d",sum);
}