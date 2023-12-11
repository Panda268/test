#include <iostream>
#include <stack>
using namespace std;

// Hàm in ra giá tr? trong stack st <char>
void print(stack<char> st) {
    // Khai báo m?t stack t?m d? luu l?i các ph?n t? dã l?y ra
    stack<char> temp;
    // L?p cho d?n khi stack r?ng
    while (!st.empty()) {
        // L?y ra ph?n t? d?nh c?a stack và in ra giá tr? c?a nó
        char c = st.top();
        cout << c << " ";
        // Lo?i b? ph?n t? d?nh kh?i stack
        st.pop();
        // Ð?y ph?n t? dã l?y ra vào stack t?m
        temp.push(c);
    }
    cout << "\n";
    // L?p cho d?n khi stack t?m r?ng
    while (!temp.empty()) {
        // L?y ra ph?n t? d?nh c?a stack t?m và d?y l?i vào stack ban d?u
        char c = temp.top();
        st.push(c);
        // Lo?i b? ph?n t? d?nh kh?i stack t?m
        temp.pop();
    }
}

int main(){
	freopen("nhap.inp", "r", stdin);
	freopen("nhap.out", "w", stdout);
	int k;
	string s;
	cin >> k; 
	cin >> s;
	stack <char> st;
	int count = 0;
	for (int i = 1; i <= s.length(); i++){
		if (st.empty()) {
			count = 1;
		}
		st.push(s[i]);
		if (st.size())
			if (s[i] == st.top()){
				count++;
				if (count == k) {
					for (int j = 1; j <= k; j++) st.pop();
					}
				}
			else count = 1;
	}
	print(st);
}


