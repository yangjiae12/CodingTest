#include <iostream>
using namespace std;

int fact(int n); // 함수 프로토타입 선언

int main() {
    int n;
    cin >> n;
    cout << fact(n);
}

int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}
