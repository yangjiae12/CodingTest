#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    int count = 99;
    cin >> num;
    
    if (num < 100) {
        cout << num << endl;
    }
    else if (num <= 1000) {
        for (int i = 100; i <= num; i++) {
            string j = to_string(i);
            if (j[0] - j[1] == j[1] - j[2]) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}