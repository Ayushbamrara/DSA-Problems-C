#include<stdio.h>
int main(){
    int a[] = {1 , 2 , 3 , 4};
    int *p = a+1;
    printf("%d",*(p++));
    printf("%d",*p);
    return 0;
}