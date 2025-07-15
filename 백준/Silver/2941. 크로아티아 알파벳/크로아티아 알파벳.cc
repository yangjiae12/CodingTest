#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for (size_t i = 0; i < s.length(); ) {
        if (i + 2 < s.length() && s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=') {
            i += 3;
        } else if (i + 1 < s.length()) {
            string two = s.substr(i, 2);
            if (two == "c=" || two == "c-" || two == "d-" ||
                two == "lj" || two == "nj" || two == "s=" || two == "z=") {
                i += 2;
            } else {
                i += 1;
            }
        } else {
            i++;
        }

        count++;
    }

    cout << count << '\n';
    return 0;
}
