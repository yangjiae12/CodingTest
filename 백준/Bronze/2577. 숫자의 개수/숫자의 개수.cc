#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int num = a * b * c;
    string strNum = to_string(num);
    
    int useNum[10] = {0};
    
    for (int i = 0; i < strNum.length(); i++) {
        useNum[strNum[i] - '0']++;
    }
    
    for (int j = 0; j < 10; j++) {
        cout << useNum[j] << endl;
    }
    
    return 0;
}