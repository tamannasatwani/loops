#include <stdio.h>

int main() {
    char ch = 'a'; 

    printf("Output: ");
    
    do {
        printf("%c ", ch); 
        ch += 4;           
    } while (ch <= 'z');   

    printf("\n");
    return 0;
}

