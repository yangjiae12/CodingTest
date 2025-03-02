#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num, n, prime = 0;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> n;
        if (isPrime(n)) prime++;
    }
    cout << prime;
    return 0;
}