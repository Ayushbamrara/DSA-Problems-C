#include<stdio.h>
void main(){
    int size = 5;
    int a[5]= {1,2,3,4,5};
    int first = 0;
    int last = size-1;
    printf("Orignal Array is : ");
    for(int i = 0; i <size; i++){
        printf(" %d ", a[i]);
    }
    printf("\n");
    while(first<=last){
        int temp = a[first];
        a[first] = a[last];
        a[last] = temp;
        first++;
        last--;
    }
    printf("Reverse array is :");
    for(int i = 0; i <size; i++){
        printf("%d ", a[i]);
    }
}