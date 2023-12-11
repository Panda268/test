#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s[5] = {"Welcome", "Hue", "University", "of", "Sciences"};
    string st, word;
    bool ktra[5] = {false};
    bool ans = false; 

    while (getline(cin, st)) {
        istringstream iss(st);
        while (iss >> word) { 
            for (int j = 0; j < 5; j++) {
                if (!ktra[j] && word == s[j]) {
                    ktra[j] = true;
                }
            }
        }
    }

    ans = true;
    for (int j = 0; j < 5; j++) {
        if (!ktra[j]) {
            ans = false;
		    break; 
        }
    }

    if (ans) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}

