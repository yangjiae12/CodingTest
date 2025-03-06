#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    int coinsNum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = n - 1; i >= 0; i--) {
        int count = k / arr[i];
        k -= arr[i] * count;  // 남은 금액 갱신
        coinsNum += count;
    }
    
    cout << coinsNum;
    
    return 0;
}