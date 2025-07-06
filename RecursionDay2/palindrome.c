#include<stdio.h>
int palindrome(int n,int rev){
    if(n == 0){
        return rev;
    } else {
        rev  = (n%10) + (rev*10);
        return palin(n/10,rev);
    }
}
int main(){
    int n = 141;
    int x = palindrome(n,0);
    if(n == x){
        printf("palindrome No.");
    } else {
        printf("Not palindrome");
    }

}