#include <iostream>
#include <string>
using namespace std;

int main() {
    int nums[10001] = {0};
    for (int selfNum = 0; selfNum <= 10000; selfNum++) {
        string strNum = to_string(selfNum);
        int num = selfNum;
        
        for (int j = 0; j < strNum.length(); j++) {
            num += strNum[j] - '0';
        }
        
        if (num <= 10000) {
            nums[num] = 1;
        }
        
        if (nums[selfNum] == 0) {
            cout << selfNum << endl;
        }
    }
    return 0;
}