#include <iostream>
using namespace std;

int main() {
    int min, max, n;
    cin >> n;
    int nums[n] = {0};
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    min = nums[0];
    max = nums[0];
    
    for (int j = 1; j < n; j++) {
        if (nums[j] < min) {
            min = nums[j];
        }
        if (nums[j] > max) {
            max = nums[j];
        }
    }
    
    cout << min << " " << max << endl;
    return 0;
}