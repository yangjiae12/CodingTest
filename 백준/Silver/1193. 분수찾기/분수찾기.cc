#include <iostream>
using namespace std;

int main() {
    int num;  // 찾으려는 번호
    cin >> num;

    int a = 1;  // 분자
    int b = 1;  // 분모
    int n = 1;  // 현재 층수
    int c = 1;  // 현재까지의 분수 개수

    while (c < num) {
        n++;  // 층수 증가
        c += n;  // 현재 층까지의 분수 개수 누적
    }

    // `c`가 `num`보다 크므로, n층에서 몇 번째인지 계산
    int diff = c - num;  // 초과한 분수의 개수

    if (n % 2 == 0) {
        // 짝수층 (↘): 분자는 증가, 분모는 감소
        a = n - diff;
        b = 1 + diff;
    } else {
        // 홀수층 (↗): 분자는 감소, 분모는 증가
        a = 1 + diff;
        b = n - diff;
    }

    cout << a << "/" << b << endl;
    return 0;
}
