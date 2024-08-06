
#include <stdio.h>

int tien_VND(int x) {
    if (x == 1) {
        return 1;
    }
    else {
        return x + tien_VND(x - 1) + 2;
    }
}

int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += tien_VND(i);
    }

    printf("Gia tri cua tong tien VND voi n = %d la: %d", n, tong);

    return 0;
}
