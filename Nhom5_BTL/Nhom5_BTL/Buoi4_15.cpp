#include <stdio.h>

int A(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        int sum = 0;
        for (int i = 1; i <= n - 1; i++) {
            sum += A(i);
        }
        return n * sum;
    }
}

int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    int ket_qua = A(n);
    printf("Gia tri cua A(%d) la: %d", n, ket_qua);

    return 0;
}
