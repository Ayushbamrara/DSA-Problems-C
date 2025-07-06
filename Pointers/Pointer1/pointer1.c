#include<stdio.h>
void main(){
    int x = 100;
    int y = 200;
    int *p1;
    p1 = &x;
    p1 = &y;
    printf("%d",*p1);
}
