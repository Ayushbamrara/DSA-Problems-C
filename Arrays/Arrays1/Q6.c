#include<stdio.h>
void main(){
    int a[5] = {1,2,3,4,5};
    printf("Elememts are : ");
    for(int i = 0; i<5; i++){
        if(i == 2){
            continue;
        }
        printf("%d ",a[i] );
    }
}