#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num;
    cin >> num;
    int min = num;
    int max = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num < min) min = num;
        if (num > max) max = num;
    }

    cout << min << " " << max << endl;
    return 0;
}