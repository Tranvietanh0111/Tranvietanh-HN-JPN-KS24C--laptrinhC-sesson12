#include <stdio.h>
#include <math.h>

void is_prime(int n) {
    if (n <= 1) {
        printf(" %d khong phai la so nguyen.\n", n);  
        return;
    }
    for (int i = 2; i <= sqrt(n); i++) {  
        if (n % i == 0) {
            printf(" %d khong phai la so nguyen to.\n", n); 
            return;
        }
    }
    printf(" %d là so nguyen to.\n", n);  
}
int main() {
    int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    is_prime(num1);
    is_prime(num2);

    return 0;
}
