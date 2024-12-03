#include <stdio.h>

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int); 
    int correct;
    printf("nhap phan tu muon tim : ");
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        if (arr[i] == n) {
        	printf("vi tri phan tu ban muon tim la : %d", arr[i]); 
             correct = 1;
            break;
        }
        if (correct != arr[i]){
        	printf("phan tu ko co trong mang "); 
        	break; 
		} 
    }
    return 0;
}

