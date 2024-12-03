#include <stdio.h>

int main(){

	int arr[5] = {5,9,2,4,-8};
	int size = sizeof(arr)/sizeof(int);

	for(int i=0;i< size;i++){
	for(int j=0;j<size -i-1;j++){
		if (arr[j] > arr[j +1] ){
			int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;			
			} 
		}
	}
	
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    int target;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &target);

    
    int left = 0, right = size - 1, found = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            printf("So %d duoc tim thay o vi tri: %d \n", target, mid);
            found = 1;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("So khong ton tai trong mang\n", target);
    }

    return 0;
}
