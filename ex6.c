//
// Created by ADMIN on 16/06/2025.
//
#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhap mang
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Nhap so can tim
    printf("Nhap so can dem: ");
    scanf("%d", &x);

    // Dem so lan xuat hien
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("So %d xuat hien %d lan trong mang.\n", x, count);

    return 0;
}
// Phân tích độ phức tạp:
// - Thời gian (Time Complexity): O(n)
//    vì phải duyệt qua tất cả phần tử trong mảng
// - Không gian (Space Complexity): O(1)
//    vì chỉ dùng 1 biến đếm (count), không dùng thêm mảng nào khác
