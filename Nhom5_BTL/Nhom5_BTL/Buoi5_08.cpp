#include <stdio.h>

int main() {
    int n, chuSoDauTien, daoNguoc = 0, chuSoLonNhat = 0, chuSoNhoNhat = 9;
    int toanLe = 1, toanChan = 1;

    // Nhap so nguyen duong n
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    // a. Tim chu so dau tien cua n
    int tam = n;
    while (tam >= 10) {
        tam /= 10;
    }
    chuSoDauTien = tam;
    printf("Chu so dau tien: %d\n", chuSoDauTien);

    /// b. Tim chu so dao nguoc cua so nguyen duong n
    tam = n;
    while (tam > 0) {
        int chuSo = tam % 10;
        daoNguoc = daoNguoc * 10 + chuSo;
        tam /= 10;
    }
    printf("Chu so dao nguoc: %d\n", daoNguoc);//

    // c. Tim chu so lon nhat cua so nguyen duong n
    // d. Tim chu so nho nhat cua so nguyen duong n
    tam = n;
    while (tam > 0) {
        int chuSo = tam % 10;
        if (chuSo > chuSoLonNhat) chuSoLonNhat = chuSo;
        if (chuSo < chuSoNhoNhat) chuSoNhoNhat = chuSo;
        tam /= 10;
    }
    printf("Chu so lon nhat: %d\n", chuSoLonNhat);
    printf("Chu so nho nhat: %d\n", chuSoNhoNhat);

    // e. Kiem tra so nguyen duong n co toan chu so le hay khong
    tam = n;
    while (tam > 0) {
        int chuSo = tam % 10;
        if (chuSo % 2 == 0) {
            toanLe = 0;
            break;
        }
        tam /= 10;
    }
    if (toanLe) {
        printf("So nguyen duong n co toan chu so le.\n");
    }
    else {
        printf("So nguyen duong n khong co toan chu so le.\n");
    }

    // f. Kiem tra so nguyen duong n co toan chu so chan hay khong
    tam = n;
    while (tam > 0) {
        int chuSo = tam % 10;
        if (chuSo % 2 != 0) {
            toanChan = 0;
            break;
        }
        tam /= 10;
    }
    if (toanChan) {
        printf("So nguyen duong n co toan chu so chan.\n");
    }
    else {
        printf("So nguyen duong n khong co toan chu so chan.\n");
    }

    return 0;
}

