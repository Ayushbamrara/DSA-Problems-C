#include<stdio.h>
void sortArray(int *a, int size){
    int *ptr = a;
    for(int i = 0; i<size ;i++){
        int min = i;
        for(int j = i+1; j<size; j++){
            if(a[i] < a[j]);
            min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted Arrays is  : ");
    for(int i =0; i<size; i++){
        printf("%d", a[i]);
    }
}

void main(){
    int size;
    printf("Enter Size : ");
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    sortArray(a,size);
}