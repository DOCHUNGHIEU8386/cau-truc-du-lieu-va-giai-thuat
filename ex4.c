#include <stdio.h>

// Tính tổng bằng vòng lặp
int sumWithLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Tính tổng bằng công thức
int sumWithFormula(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int result1 = sumWithLoop(n);
    int result2 = sumWithFormula(n);

    printf("Tong bang vong lap: %d\n", result1);
    printf("Tong bang cong thuc: %d\n", result2);

    return 0;
}
