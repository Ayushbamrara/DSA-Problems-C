#include<stdio.h>
void main(){
    int size1;
    printf("Enter first Array size\n");
    scanf("%d",&size1);
    int a[size1];
    printf("Enter first Array elements");
    for(int i = 0; i<size1; i++){
        scanf("%d",&a[i]);
    }
    int size2;
    printf("Enter second Array size\n");
    scanf("%d",&size2);
    int b[size2];
    printf("Enter second Array elements");
    for(int i = 0; i<size2; i++){
        scanf("%d",&b[i]);
    }
    int size3 = size1;
    int c[size3];
    printf("Sum of both Array is : ");
    for(int i = 0; i<size3; i++){
        int sum = a[i]+b[i];
        printf("%d ", sum);
    }
}