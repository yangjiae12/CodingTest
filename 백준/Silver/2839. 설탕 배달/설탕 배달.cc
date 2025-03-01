#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a = n / 5; // 5kg 봉지 개수를 최대로 사용
    while (a >= 0) { // 5kg 봉지를 하나씩 줄여가면서 확인
        int remaining = n - (a * 5); // 남은 무게 계산
        if (remaining % 3 == 0) { // 3kg으로 정확히 나눠지는 경우
            int b = remaining / 3;
            cout << a + b << endl; // 총 봉지 개수 출력
            return 0;
        }
        a--; // 5kg 봉지를 하나 줄여서 다시 시도
    }
    
    cout << -1 << endl; // 정확히 나누는 방법이 없을 경우
    return 0;
}
