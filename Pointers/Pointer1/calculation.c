#include<stdio.h>
void main(){
    int a= 10;
    int b = 10;
    int *p, *q;
    p = &a;
    q = &b;
    int sum = *p + *q;
    printf("%d",sum);
}
