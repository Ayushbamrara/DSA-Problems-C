#include<stdio.h>
void update(int *n){
    *n = *n * 10;
}

void main()
{
    int a[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        update(&a[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ", a[i]);
    }
}
