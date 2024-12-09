#include <stdio.h>

void giai_thua(int n) {
    if (n < 0) {
        printf("Giai thua khong xac dinh voi so am!\n");
        return;
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("Giai thua cua %d la: %lld\n", n, result);
}
int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    giai_thua(n);
    return 0;
}
