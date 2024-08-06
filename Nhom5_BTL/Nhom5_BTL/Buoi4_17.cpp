#include <stdio.h>

int X(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        return X(n - 1) + (n - 1) * X(n - 2);
    }
}

int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    printf("Gia tri cua X(%d) la: %d", n, X(n));

    return 0;
}
