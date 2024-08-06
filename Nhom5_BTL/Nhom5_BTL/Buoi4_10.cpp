#include <stdio.h>

// Ham tinh so Fibonacci thu n
long long Fibonacci(int n) {
    if (n <= 2) return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// Ham in ra cac so Fibonacci trong doan [m, n]
void inFibonacciTrongDoan(int m, int n) {
    int i = 1;
    long long fib = Fibonacci(i);

    printf("Day so Fibonacci thuoc doan [%d, %d] la: ", m, n);
    while (fib <= n) {
        if (fib >= m) {
            printf("%lld ", fib);
        }
        i++;
        fib = Fibonacci(i);
    }
    printf("\n");
}

int main() {
    int m, n;
    printf("Nhap gia tri m: ");
    scanf_s("%d", &m);
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    inFibonacciTrongDoan(m, n);

    return 0;
}

