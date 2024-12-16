#include <stdio.h>

void sumSum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int x = 15; 
    int y = 25; 
    int sum = 0;

    printf("Truoc khi tinh tong:\n");
    printf("x = %d, y = %d\n", x, y); 

    sumSum(&x, &y, &sum);

    printf("Sau khi tinh tong:\n");
    printf("Tong cua x va y la: %d\n", sum); 
    return 0;
}
