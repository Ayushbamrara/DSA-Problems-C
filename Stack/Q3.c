#include <stdio.h>

void main() {
    char str[10];
    char stack[10];  // changed to char for clarity
    printf("Enter a string: ");
    scanf("%s", str); 

    int cnt = 0, i = 0;

    // Count string length
    while(str[i] != '\0'){
        cnt++;
        i++;
    }

    printf("Length: %d\n", cnt);

    int top = -1;

    // Push characters onto stack
    for(i = 0; i < cnt; i++){
        stack[++top] = str[i]; 
    }

    // Pop characters back to reverse the string
    int j = 0;
    while (top >= 0) {
        str[j++] = stack[top--];
    }
    str[j] = '\0'; 

    printf("Reversed string: %s\n", str);
}
