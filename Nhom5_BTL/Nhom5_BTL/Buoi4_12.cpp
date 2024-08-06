#include <stdio.h>

// Hàm tính s? h?ng th? n c?a hai dãy s?
void tinh_day_so(int n, int* x_n, int* y_n) {
    int x = 1, y = 0, x_temp, y_temp;

    for (int i = 1; i <= n; i++) {
        x_temp = x;
        y_temp = y;
        x = x_temp + y_temp;
        y = 3 * x_temp + 2 * y_temp;
    }

    *x_n = x;
    *y_n = y;
}

int main() {
    int n, x_n, y_n;

    // Nh?p giá tr? n
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    // Tính toán s? h?ng th? n
    tinh_day_so(n, &x_n, &y_n);

    // In k?t qu?
    printf("x_%d = %d, y_%d = %d\n", n, x_n, n, y_n);

    return 0;
}
