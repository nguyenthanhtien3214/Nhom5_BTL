#include <stdio.h>

int A(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + A(n - 1) + 2;
    }
}

int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    int ket_qua = 0;
    for (int i = 1; i <= n; i++) {
        ket_qua += A(i);
    }

    printf("Gia tri cua tong A1 + A2 + ... + An voi n = %d la: %d", n, ket_qua);

    return 0;
}

