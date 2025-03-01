#include <iostream>
using namespace std;

int main() {
    // 2차원 배열을 사용하는 게 포인트
    
    int t;
    cin >> t;
    
    while (t--) {
        int k, n;
        cin >> k >> n;
        
        int dp[15][15];
        
        // 0층은 각 호 번호와 동일한 값으로 미리 채워야 함
        for (int i = 1; i <= 14; i++) {
            dp[0][i] = i;
        }
        
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                if (j == 1) {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = dp[i][j-1] + dp[i-1][j];
                }
            }
        }
        cout << dp[k][n] << endl;
    }
    
    return 0;
}