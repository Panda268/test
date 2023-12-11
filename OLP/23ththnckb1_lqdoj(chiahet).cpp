#include <iostream>
using namespace std;

#define ll long long

ll tinhLuyThua(ll k) {
	ll luyThua = 1;
	for (int i = 0; i < k; i++) {
		luyThua *= 10;
	}
	return luyThua;
}

int main() {
	int n;
	short int k;
	cin >> n >> k;
	ll luyThua = tinhLuyThua(k);
	for (int i = 1; i < n; i++) {
		if ((luyThua * i) % n == 0) {
			cout << (luyThua * i) / n;
			return 0;
		}
	}
}
