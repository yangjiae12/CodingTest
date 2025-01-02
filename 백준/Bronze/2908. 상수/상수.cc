#include <iostream>
using namespace std;

int main() {
    string firstWord, secondWord;
    cin >> firstWord;
    cin >> secondWord;
    
    int temp;
    
    temp = firstWord[0];
    firstWord[0] = firstWord[2];
    firstWord[2] = temp;
    
    temp = secondWord[0];
    secondWord[0] = secondWord[2];
    secondWord[2] = temp;
    
    if (firstWord > secondWord) {
        cout << firstWord << endl;
    } else {
        cout << secondWord << endl;
    }
  
    return 0;
}