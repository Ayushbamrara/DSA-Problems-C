#include<stdio.h>
int main(){
    int a[3] = {10,20,30};
    int (*p)[3] = &a;
    printf("%d",*(*p + 1));
    return 0;
}
