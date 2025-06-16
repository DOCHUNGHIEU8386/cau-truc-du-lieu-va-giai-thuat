#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Sắp xếp tăng dần (kiểu so sánh từng cặp rồi đổi chỗ)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Nếu phần tử sau nhỏ hơn phần tử trước thì đổi chỗ
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Phân tích độ phức tạp:
// - Thời gian (Time): O(n^2) vì có 2 vòng lặp lồng nhau
// - Không gian (Space): O(1) vì không dùng thêm mảng nào khác
