#include <stdio.h>

int main() {
    
    int arr[] = {5, 3, 8, 3, -1, 3, 9};
    int size = sizeof(arr) / sizeof(int);

    
    int target;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &target);
    int positions[size];
    int count = 0;

    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            positions[count] = i;
            count++;
        }
    }

    
    if (count > 0) {
        printf("So %d duoc tim thay o cac vi tri : ", target);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("So %d khong ton tai trong mang\n", target);
    }

    return 0;
}

