#include <stdio.h>

int main() {
    int arr[] = {19, 1, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Mang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    int  key;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        int j = i - 1;
        while ( j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("\n");

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

