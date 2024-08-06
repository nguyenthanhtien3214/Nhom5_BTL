#include <stdio.h>

// Ham de quy tinh to hop chap k cua n phan tu
int toHop(int n, int k) {
    // Base cases
    if (k == 0 || k == n) {
        return 1;
    }
    // Recursive case
    return toHop(n - 1, k) + toHop(n - 1, k - 1);
}

int main() {
    int n, k;

    // Nhap n va k
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("Nhap k: ");
    scanf_s("%d", &k);

    // Tinh to hop C(n, k)
    int ketQua = toHop(n, k);
    printf("To hop chap %d cua %d phan tu la: %d\n", k, n, ketQua);

    return 0;
}
