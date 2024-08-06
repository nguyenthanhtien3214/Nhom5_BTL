#include <stdio.h>

int Y(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    else if (n == 3) {
        return 3;
    }
    else {
        return Y(n - 1) + 2 * Y(n - 2) + 3 * Y(n - 3);
    }
}

int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf_s("%d", &n);

    printf("Gia tri cua Y(%d) la: %d", n, Y(n));

    return 0;
}
