#include<stdio.h>
int search(int *a, int size, int key){
    int *ptr = a;
    for(int i=0;i<size;i++){
        if(*ptr == key){
            return i;
        }
        ptr++;
    }
    return -1;
}
void main(){
    int size;
    printf("Enter Size : ");
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    int key;
    printf("Enter key to search : ");
    scanf("%d", &key);

    int res = search(a,size,key);
    if(res != -1){
        printf("Element found at %d  index", res);
    } else{
        printf("element not found");
    }
}