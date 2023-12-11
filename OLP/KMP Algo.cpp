#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> computePrefixFunction(const string& pattern) {
    vector<int> prefix(pattern.length(), 0);
    int k = 0;

    for (int i = 1; i < pattern.length(); i++) {
        while (k > 0 && pattern[k] != pattern[i]) {
            k = prefix[k - 1];
        }
        if (pattern[k] == pattern[i]) {
            k++;
        }
        prefix[i] = k;
    }

    return prefix;
}

int kmpSearch(const string& text, const string& pattern) {
    vector<int> prefix = computePrefixFunction(pattern);
    int i = 0, j = 0;

    while (i < text.length()) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
            if (j == pattern.length()) {
                return i - j; // Tìm th?y xu?t hi?n
                j = prefix[j - 1];
            }
        } else {
            if (j != 0) {
                j = prefix[j - 1];
            } else {
                i++;
            }
        }
    }

    return -1; // Không tìm th?y
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";

    int found = kmpSearch(text, pattern);

    cout << found;
    

    return 0;
}

