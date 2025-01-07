#include <iostream>
using namespace std;

int main() {
    int n, num = 1, floor = 1;  // floor 초기값을 1로 설정
    
    cin >> n;
    
    for (int i = 1; num < n; i++) {  // i는 1부터 시작
        num += i * 6;  // 벌집 구조의 숫자 증가
        floor++;
    }
    
    cout << floor << endl;
    
    return 0;
}