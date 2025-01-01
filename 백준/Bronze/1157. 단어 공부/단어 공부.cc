#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    int counts[26] = {0};
    int max = 0;
    int maxNum = 0;
    bool isDuplicated = false;
    
    for (string::size_type i = 0; i < word.length(); i++) {
        word[i] = toupper(word[i]);
        counts[word[i] - 'A']++;
    }
    
    for (int j = 0; j < 26; j++) {
        if (max < counts[j]) {
            max = counts[j];
            maxNum = j;
            isDuplicated = false;
        }
        else if (max == counts[j]) {
            isDuplicated = true;
        }
    }
    
    if (isDuplicated) {
        cout << "?" << endl;
    } else {
        cout << (char)(maxNum + 'A') << endl;
    }
  
    return 0;
}