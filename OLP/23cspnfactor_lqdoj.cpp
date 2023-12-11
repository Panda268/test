#include <iostream>
using namespace std;

#define ll long long 

ll gt(ll m){
	ll s = 0, p = 5;
	while (m >= p){
		s += m / p;
		p *= 5;
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while (t>0){
		ll n, ans = 0, mid;
		cin >> n;
		ll l = 5, r = n*5;
		while (l <= r){ 
			mid = (r+l) / 2;
			if (gt(mid) < n) {
				l = mid + 1;
			}
			else {
				ans = mid;
				r = mid - 1;
			}
		}
		cout << ans << endl;
		t--;
	}
}

