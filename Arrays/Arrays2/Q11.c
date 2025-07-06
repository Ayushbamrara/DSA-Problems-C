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
    int max = 0;
    for(int i=0;i<size;i++){
        if(a[i]>max){
            max= a[i];
        }
    }
    int freq[max+1];
    for(int i =0; i<size;i++){
        freq[i] = 0;
    }
    printf("Duplicate elements are:\n");
    for(int i =0; i<size; i++){
        freq[a[i]]++;
        if(freq[a[i]]  == 2){
            printf("%d ",a[i]);
        }
    }
}