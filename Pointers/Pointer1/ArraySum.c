#include<stdio.h>
void calc(int a[], int *sum){
    int *p;
    p=a;
    for(int i=0;i<5;i++){
        sum += *(p+i);
    }
}

void main(){
    int a[5]={1,2,3,4,5};
    int sum = 0;
    calc(a, sum);

}
