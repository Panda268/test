#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "tt YYE iIyugUU";
    //getline (cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (i == 0 || (s[i-1] == ' ' && s[i] >= 'a' && s[i] <= 'z')) {
            s[i] -= 32;
        } else if (s[i-1] != ' ' && s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }

    cout << s;
    return 0;
}
