#include <iostream>
using namespace std;

    /*
    666이 포함된 숫자를 찾는 문제
    브루투포스 방식 (완전 탐색)
      - 작은 숫자부터 차례대로 검사하면서 "666"이 포함된 경우 카운트 증가
    */

int main() {
    int n;
    cin >> n;
    
    int num = 666;
    int count = 0;
    
    while(count < n) {
        if (to_string(num).find("666") != string::npos) count++;
        num++;
    }  
    
    cout << num - 1;
    
    return 0;
}