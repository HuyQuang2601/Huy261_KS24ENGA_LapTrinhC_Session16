#include <stdio.h>
#include <string.h>

void reverseStringPointer(char *inputString, char *reverseString) {
    int length = strlen(inputString);
    int j = 0;
    
    for (int i = length - 1; i >= 0; i--) {
        *(reverseString + j) = *(inputString + i);  
        j++;
    }
    *(reverseString + j) = '\0';  
}

int main() {
    char inputString[100], reverseString[100];

    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin); 

    inputString[strcspn(inputString, "\n")] = '\0';

    reverseStringPointer(inputString, reverseString);

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

