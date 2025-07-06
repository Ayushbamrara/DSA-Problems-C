#include<stdio.h>
void main(){
    int size;
    printf("Enter  Array size\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter  Array elements");
    for(int i = 0; i<size; i++){
        scanf("%d",&a[i]);
    }
    int right = size-1;
    int left = 0;
    int flag = 0;
    while(left < right){
        if(a[left] == a[right]){
            left++;
            right--;
        }
        else {
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Array is palindrome");
    } else{
        printf("Array is not palaindrome");
    }

}