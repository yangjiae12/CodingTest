#include <iostream>
using namespace std;

int main() {
    int n;  // 테스트 케이스 개수
    cin >> n;
    
    for (int i = 0; i < n; i++) {  // 각 테스트 케이스
        string results;
        cin >> results;
        
        int score = 0;  // 각 테스트 케이스의 점수
        
        for (int i = 0; i < results.size(); i++) {
            if (results[i] == 'O') {
                int current_streak = 0;  // 연속된 0의 개수
                for (int j = i; j >= 0; j--) {
                    if (results[j] == 'O') {
                        current_streak++;
                    }
                    else {
                        break;
                    }
                }
                score += current_streak;
            }
        }
        
        cout << score << endl;
    } 
    
    return 0;
}