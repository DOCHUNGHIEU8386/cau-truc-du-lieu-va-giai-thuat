int* mallocArray(int n ) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int j = 0 ; j < n ; j++ ) {
        arr[j] = j;
    }
    return arr;
}
//vì cấp phát động một mảng có n phần tử nên bô nhớ cần dùng ti lẹ tuyen tinh voi n , độ phức tạp khong gian là O(n)