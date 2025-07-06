#include<stdio.h>
void copy(int *source, int *destination, int size){
    for(int i = 0; i<size; i++){
        *(destination + i) = * (source + i);
    }
}

void main(){
    int source[5] = {1,2,3,4,5};
    int destination[5];
    int size = 5;
    copy(source,destination,size);
    for(int i = 0; i<size; i++){
        printf("%d ", destination[i]);
    }
}
