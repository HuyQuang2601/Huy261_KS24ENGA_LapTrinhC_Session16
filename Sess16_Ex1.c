#include <stdio.h>

int main() {
    int x = 10;     
    int *ptr = &x;  

    printf("Cach 1:\n");
    printf("Gia tri cua x: %d\n", x);        
    printf("Dia chi cua x: %d\n", &x); 

    printf("\nCach 2:\n");
    printf("Gia tri cua x qua ptr: %d\n", *ptr);      
    printf("Dia chi cua x qua ptr: %d\n", ptr); 

    return 0;
}

