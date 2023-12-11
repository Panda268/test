#include <iostream>
using namespace std;

#define ll long long

int main() {
	int n, M;
	string s;
	cin >> n >> M;
	cin >> s;
	int ans = 0, k = 1;
	for (int i = n - 1; i >= 0; i--) {
		ans = (ans + (int)(s[i] - 48) * (i + 1) * k) % M;
		k = (k * 10 + 1) % M;
	}
	cout << ans;
}
