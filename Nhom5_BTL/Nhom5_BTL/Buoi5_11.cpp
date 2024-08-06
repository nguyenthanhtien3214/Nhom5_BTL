#include <stdio.h>

// Ham tinh giai thua
long long giaiThua(int n) {
    long long ketQua = 1;
    for (int i = 2; i <= n; i++) {
        ketQua *= i;
    }
    return ketQua;
}

// Ham tinh to hop chap k cua n (binomial coefficient)
long long toHop(int n, int k) {
    if (k > n) return 0;
    return giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
}

int main() {
    int n, m;

    // Nhap so luong hoc sinh va phan thuong
    printf("Nhap so luong hoc sinh (n): ");
    scanf_s("%d", &n);
    printf("Nhap so luong phan thuong (m): ");
    scanf_s("%d", &m);

    if (m >= 2 * n) {
        // Truong hop a
        long long cachChia = toHop(m + n - 1, n - 1);
        printf("So cach chia cho truong hop m >= 2n la: %lld\n", cachChia);
    }
    else if (m == n) {
        // Truong hop b
        printf("So cach chia cho truong hop m = n la: 1\n");
    }
    else if (m > 2 * n) {
        // Truong hop c
        long long cachChia = toHop(m - 1, n - 1);
        printf("So cach chia cho truong hop m > 2n va moi hoc sinh deu co qua la: %lld\n", cachChia);
    }
    else {
        printf("Khong co truong hop nao phu hop voi dieu kien cho truoc.\n");
    }

    return 0;
}
