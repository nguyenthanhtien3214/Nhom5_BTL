#include <stdio.h>
#include <math.h>

int X(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * X(n - 1);
    }
}

int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    int ket_qua = 0;
    for (int i = 0; i <= n; i++) {
        ket_qua += (int)pow(-1, i) * X(i);
    }

    printf("Gia tri cua X voi n = %d la: %d", n, ket_qua);

    return 0;
}

