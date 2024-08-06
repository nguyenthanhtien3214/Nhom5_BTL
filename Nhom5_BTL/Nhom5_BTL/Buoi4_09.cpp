#include <stdio.h>

// Ham tinh S(n) theo cong thuc 1
double S1(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i * (i + 1) * (i + 2));
    }
    return sum;
}

// Ham tinh S(n) theo cong thuc 2
int S2(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

// Ham tinh S(n) theo cong thuc 3
int S3(int n) {
    int sum = 0;
    int partial_sum = 0;
    for (int i = 1; i <= n; i++) {
        partial_sum += i;
        sum += partial_sum;
    }
    return sum;
}

// Ham tinh giai thua cua so nguyen n
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Ham tinh S(n) theo cong thuc 4
double S4(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1) / (double)factorial(2 * i);
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    printf("S1(n) = %lf\n", S1(n));
    printf("S2(n) = %d\n", S2(n));
    printf("S3(n) = %d\n", S3(n));
    printf("S4(n) = %lf\n", S4(n));

    return 0;
}
