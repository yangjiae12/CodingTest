#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int remainders[SIZE] = {0}; // 배열 초기화
    int count = 0;
    bool isUnique;

    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
        int remainder = numbers[i] % 42;

        isUnique = true;

        for (int j = 0; j < count; j++) { // 고유값 개수까지만 검사
            if (remainders[j] == remainder) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            remainders[count] = remainder; // 고유값 추가
            count++;
        }
    }

    cout << count << endl; // 고유 나머지 개수 출력
    return 0;
}
