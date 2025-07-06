#include<stdio.h>
void fun (int a){
    printf("values : %d",a);

}
int main(){
    void (*fptr)(int) = fun;
    (*fptr)(10);
    return 0;
}