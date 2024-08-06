#include <stdio.h>

int Fibonacci(int n) {
    if (n < 6) {
        return n;
    }
    else {
        return Fibonacci(n - 5) + Fibonacci(n - 4) + Fibonacci(n - 3) + Fibonacci(n - 2) + Fibonacci(n - 1);
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
