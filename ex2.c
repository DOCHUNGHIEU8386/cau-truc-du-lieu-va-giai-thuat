#include <stdio.h>
int main() {
    int n;
    int arr[100];
    int x , count = 0 ;
    printf("Nhap so phan tu cua mang (n<100): ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang :\n");
    for (int i = 0 ; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap so can tim: ");
    scanf("%d", &x);

    for (int i = 0 ; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("So %d xuat hien %d trong mang .\n", x, count);
    return 0;
}