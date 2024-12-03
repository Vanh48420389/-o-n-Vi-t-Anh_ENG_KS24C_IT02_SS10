#include <stdio.h>

int main() {
    int arr[] = {0, 27, 12, 22, 11};
    int n = sizeof(arr) / sizeof(int);
    int i;

    printf("Mang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int  j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
                temp = arr[min_idx];
                arr[min_idx] = arr[i];
                arr[i] = temp;
    }


    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

