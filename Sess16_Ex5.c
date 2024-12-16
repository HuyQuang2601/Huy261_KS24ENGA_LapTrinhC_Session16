#include <stdio.h>

void update(int *arr, int newValue, int index) {
    *(arr + index) = newValue; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ",  arr[i]); 
    }

    update(arr, 100, 2);

    printf("\nMang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}

