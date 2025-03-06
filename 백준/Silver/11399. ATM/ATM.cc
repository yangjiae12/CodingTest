// 오름차순으로 정렬 후 누적합 계산

#include <iostream>
#include <algorithm>  // sort() 사용
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    
    int totalTime = 0;  // 최종
    int currentTime = 0;  // 누적 대기
    
    // 3 1 4 3 2
    // 1 2 3 3 4
    // 1 + 3 + 6 + 9 + 13
    
    for (int i = 0; i < n; i++) {
        currentTime += arr[i];  // 현재 사람의 대기 시간 추가
        totalTime += currentTime;  // 모든 사람의 총 대기 시간 누적
    }
    
    cout << totalTime;
    
    return 0;
}