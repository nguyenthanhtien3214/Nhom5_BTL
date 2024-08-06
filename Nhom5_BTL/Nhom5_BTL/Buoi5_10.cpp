
#include <stdio.h>
#include <stdlib.h>

// Ham de quy tim kiem nhi phan
int timKiemNhiPhan(int arr[], int trai, int phai, int x) {
    if (phai >= trai) {
        int giua = trai + (phai - trai) / 2;

        // Neu phan tu o giua la x
        if (arr[giua] == x) {
            return giua;
        }

        // Neu phan tu o giua lon hon x, tim kiem trong mang con ben trai
        if (arr[giua] > x) {
            return timKiemNhiPhan(arr, trai, giua - 1, x);
        }

        // Neu phan tu o giua nho hon x, tim kiem trong mang con ben phai
        return timKiemNhiPhan(arr, giua + 1, phai, x);
    }

    // Tra ve -1 neu khong tim thay
    return -1;
}

// Ham sap xep noi bot (Bubble Sort)
void sapXep(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoan doi hai gia tri
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, x;

    // Nhap kich thuoc cua mang
    printf("Nhap kich thuoc cua mang: ");
    scanf_s("%d", &n);

    // Cap phat dong mang
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    // Sap xep mang
    sapXep(arr, n);

    // Xuat mang da sap xep
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nhap gia tri can tim
    printf("Nhap gia tri can tim: ");
    scanf_s("%d", &x);

    // Goi ham tim kiem nhi phan
    int ketQua = timKiemNhiPhan(arr, 0, n - 1, x);

    if (ketQua != -1) {
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", x, ketQua);
    }
    else {
        printf("Phan tu %d khong co trong mang.\n", x);
    }

    // Giai phong bo nho
    free(arr);

    return 0;
}
