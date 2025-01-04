#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pcs = 0;  // 그룹 단어 개수

    for (int i = 0; i < n; i++) {
        string group;
        cin >> group;

        int check[26] = {0};  // 알파벳 체크 배열
        bool isGroupWord = true;

        for (int j = 0; j < group.length(); j++) {
            // 문자가 이미 등장했으면서, 이전 문자와 다르면 그룹 단어가 아님
            if (check[group[j] - 'a'] > 0 && group[j - 1] != group[j]) {
                isGroupWord = false;
                break;
            }

            check[group[j] - 'a']++;  // 문자 체크
        }

        if (isGroupWord) pcs++;  // 그룹 단어일 경우 개수 증가
    }

    cout << pcs << endl;
    return 0;
}
