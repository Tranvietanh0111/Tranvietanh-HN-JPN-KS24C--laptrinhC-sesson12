#include <stdio.h>

void tim_max(int arr[], int n) {
    int max = arr[0];  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    printf("So lon nhat trong mang la: %d\n", max);
}
int main() {
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Nhap gia tri cac phan tu cho mang:\n");
    for (int i = 0; i < n; i++) {
    	printf("Phan tu arr[%d] = ", i); 
        scanf("%d", &arr[i]);
    }
    tim_max(arr, n);
    return 0;
}
