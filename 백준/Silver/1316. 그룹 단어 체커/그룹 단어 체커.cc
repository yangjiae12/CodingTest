#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int pcs = 0;
    
    for (int i = 0; i < n; i++) {
        string group;
        cin >> group;
        
        int check[26] = {0};
        char prev;
        bool isGroupWord = true;
        
        for (int j = 0; j < group.length(); j++) {
            check[group[j] - 'a']++;
            prev = group[j - 1];
            if (j == 0) {
                isGroupWord = true;
            }
            else if (check[group[j] - 'a'] == 1) {
                isGroupWord = true;
            }
            else if (check[group[j] - 'a'] > 0 && prev != group[j]) {
                isGroupWord = false;
                break;
            }
        }
        
        if (isGroupWord) {
            pcs++;
        }
    }
    
    cout << pcs << endl;
    
    return 0;
}