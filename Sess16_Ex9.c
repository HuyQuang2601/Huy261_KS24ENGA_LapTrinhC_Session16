#include <stdio.h>

#define MAX_SIZE 100  

void addElement(int *arr, int *size, int value, int position) {
    if (position < 0 || position > *size) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        *(arr + i) = *(arr + i - 1);  
    }

    *(arr + position) = value;

    (*size)++;
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; 

    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int value = 99;  
    int position = 2;

    addElement(arr, &size, value, position);

    printf("Mang sau khi them phan tu %d tai vi tri %d:\n", value, position);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

