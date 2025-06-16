#include <stdio.h>
int n;
int main () {
    for (int i = 0 ; i < n; i++) {
        printf("Hello\n");
    }
    return 0;
}
//kết quả độ phức tạp là O(n) tại vì mảng duyệt qua 1 vòng lăp chạy đến n (lặp lại n lần ) =>O(n)