#include <iostream>
using namespace std;

void reverse(string &str);

int main() {
    string firstNum, secondNum;
    cin >> firstNum >> secondNum;
    
    reverse(firstNum);
    reverse(secondNum);
    
    if (firstNum > secondNum) {
        cout << firstNum << endl;
    }
    else {
        cout << secondNum << endl;
    }

    return 0;
}

void reverse(string &str) {
    char temp = str[0];
    str[0] = str[2];
    str[2] = temp;
}
