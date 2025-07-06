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
    int EvenCount = 0, OddCount = 0, ZeroCount = 0;
    for(int i=0;i<size;i++){
        if(a[i]%2 == 0){
            EvenCount++;
        } else {
            OddCount++;
        }
        if(a[i] == 0){
            ZeroCount++;
        }
    }
    printf("Even Numbers Are : %d\n",EvenCount);
    printf("Odd Numbers Are : %d\n",OddCount);
    printf("Zero's  Are : %d\n",ZeroCount);
}
