#include <iostream>
#include <algorithm>  // swap(), random 함수 사용
#include <vector>
#include <ctime>  // 랜덤 시드 설정
using namespace std;

void quickSort(vector<int> &arr, int left, int right) {
    if (left >= right) return;

    // 랜덤 피벗 선택
    int pivotIndex = left + rand() % (right - left + 1);
    swap(arr[left], arr[pivotIndex]);  // 랜덤 피벗을 맨 앞으로 이동

    int pivot = arr[left];  
    int i = left + 1, j = right;

    while (i <= j) {
        while (i <= right && arr[i] <= pivot) i++;
        while (j > left && arr[j] >= pivot) j--;

        if (i < j) swap(arr[i], arr[j]);
    }

    swap(arr[left], arr[j]);  // 피벗을 최종 위치로 이동

    quickSort(arr, left, j - 1);  // 왼쪽 부분 정렬
    quickSort(arr, j + 1, right); // 오른쪽 부분 정렬
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    srand(time(0));  // 랜덤 시드 초기화

    int t;
    cin >> t;
    
    vector<int> arr(t);  // 동적 배열 사용
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, t - 1);

    for (int i = 0; i < t; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}
