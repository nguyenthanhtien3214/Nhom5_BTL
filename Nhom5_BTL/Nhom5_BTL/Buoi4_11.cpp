#include <stdio.h>

// Ham tinh so Fibonacci thu n
long long Fibonacci(int n) {
    if (n <= 2) return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// Ham tim so Fibonacci lon nhat nho hon n (de quy)
long long timFibonacciLonNhatDeQuy(int n) {
    int i = 1;
    long long fib = Fibonacci(i);
    long long maxFib = 0;

    while (fib < n) {
        maxFib = fib;
        i++;
        fib = Fibonacci(i);
    }

    return maxFib;
}

// Ham tim so Fibonacci lon nhat nho hon n (khong de quy)
long long timFibonacciLonNhatKhongDeQuy(int n) {
    long long fib1 = 1, fib2 = 1, fib = 1;

    while (fib < n) {
        fib = fib1 + fib2;
        if (fib < n) {
            fib1 = fib2;
            fib2 = fib;
        }
    }

    return fib1;
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    long long maxFibDeQuy = timFibonacciLonNhatDeQuy(n);
    long long maxFibKhongDeQuy = timFibonacciLonNhatKhongDeQuy(n);

    printf("So Fibonacci lon nhat nho hon %d (de quy): %lld\n", n, maxFibDeQuy);
    printf("So Fibonacci lon nhat nho hon %d (khong de quy): %lld\n", n, maxFibKhongDeQuy);

    return 0;
}
