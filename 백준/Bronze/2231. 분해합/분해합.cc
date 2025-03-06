#include <iostream>
using namespace std;

// 각 자리수의 합을 구하는 함수
int digitSum(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// 생성자를 찾는 함수
int findConstructor(int n) {
    int temp = n;
    int digitCount = 0;
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }
    
    int start = n - (digitCount * 9);
    
    for (int m = start; m < n; m++) {
        if (m + digitSum(m) == n) {
            return m;
        }
    }
    
    return 0;
}

int main() {
    int n;
    cin >> n;
    
    cout << findConstructor(n) << endl;
    
    return 0;
}