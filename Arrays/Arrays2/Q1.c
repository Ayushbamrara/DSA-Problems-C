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
    int first = 0;
    int last = size-1;
    int temp = a[first];
    a[first] = a[last];
    a[last] = temp;
    for(int i = 0;i<size;i++){
        printf("%d ",a[i]);
    }
}