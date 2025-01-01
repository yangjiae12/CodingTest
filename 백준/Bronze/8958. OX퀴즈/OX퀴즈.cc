#include <iostream>
using namespace std;

int main() {
    int n;  // 테스트 케이스 개수
    cin >> n;

    for (int t = 0; t < n; t++) {
        string results;
        cin >> results;

        int score = 0;  // 점수
        int current_streak = 0;  // 연속된 'O'의 개수

        for (int i = 0; i < results.size(); i++) {
            if (results[i] == 'O') {
                current_streak++;
                score += current_streak;  // 연속 점수 누적
            } else {
                current_streak = 0;  // 연속 끊김
            }
        }

        cout << score << endl;  // 결과 출력
    }

    return 0;
}
