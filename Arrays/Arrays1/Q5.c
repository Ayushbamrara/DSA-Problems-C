#include<stdio.h>
void main(){
    int size = 8;
    int a[size];
    int sum = 0;
    printf("Enter arrays elements : ");
    for(int i = 0; i<size; i++){
        scanf("%d", &a[i]);
        sum+= a[i];
        printf("%d ", a[i]);
        if(sum > 50){
            printf("Sum is : %d",sum);
            break;
        }
    }
}