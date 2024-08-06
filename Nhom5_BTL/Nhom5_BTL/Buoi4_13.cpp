#include <stdio.h>

int Fibonacci(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n > 1) {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    int ket_qua = Fibonacci(n);
    printf("Gia tri thu %d cua day Fibonacci la: %d", n, ket_qua);

    return 0;
}
