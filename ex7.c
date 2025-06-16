#include <stdio.h>

// Cách 1: Dò từng cặp số coi có trùng không
int kiemTraTrungLap1(int mang[], int soLuong) {
    for (int i = 0; i < soLuong - 1; i++) {
        for (int j = i + 1; j < soLuong; j++) {
            if (mang[i] == mang[j]) {
                return 1; // Có trùng
            }
        }
    }
    return 0; // Không trùng
}

// Cách 2: Dùng mảng phụ để kiểm tra số nào đã gặp
int kiemTraTrungLap2(int mang[], int soLuong) {
    int danhDau[1001] = {0}; // vì số trong khoảng 0 - 1000

    for (int i = 0; i < soLuong; i++) {
        if (danhDau[mang[i]] == 1) {
            return 1;
        }
        danhDau[mang[i]] = 1;
    }
    return 0;
}

int main() {
    int soLuong;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &soLuong);

    int daySo[soLuong];
    printf("Nhap cac so:\n");
    for (int i = 0; i < soLuong; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &daySo[i]);
    }

    if (kiemTraTrungLap1(daySo, soLuong)) {
        printf("Co phan tu trung (cach 1).\n");
    } else {
        printf("Khong co trung (cach 1).\n");
    }

    if (kiemTraTrungLap2(daySo, soLuong)) {
        printf("Co phan tu trung (cach 2).\n");
    } else {
        printf("Khong co trung (cach 2).\n");
    }

    return 0;
}
// Cách 1: So sánh từng cặp phần tử
//  Độ phức tạp thời gian: O(n^2)
//  Độ phức tạp không gian: O(1)
// Cách 2: Dùng mảng phụ để đánh dấu
//  Độ phức tạp thời gian: O(n)
//  Độ phức tạp không gian: O(k) với k = 1001 (do mảng từ 0 → 1000)
