#include <stdio.h>
int timPhanTuNhieuNhat(int arr[], int n) {
    int maxCount = 0;
    int phanTuNhieuNhat = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            phanTuNhieuNhat = arr[i];
        }
    }

    return phanTuNhieuNhat;
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int mang[n];
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    int ketQua = timPhanTuNhieuNhat(mang, n);
    printf("Phan tu xuat hien nhieu nhat la: %d\n", ketQua);

    return 0;
}
// Hàm tìm phần tử xuất hiện nhiều nhất trong mảng
//  Độ phức tạp thời gian: O(n^2)
//  Độ phức tạp không gian: O(1) 