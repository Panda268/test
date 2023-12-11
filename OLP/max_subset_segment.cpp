#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

#define ll long long
ll n, k, a[10000]{ 0 }, l, r;

void build() {
	for (int i = n; i >= 1; i--) {
		a[i] = max(a[2 * i], a[2 * i + 1]);
	}
}

int query(int l, int r) {  
	ll res = INT_MAX; 
	for (l += n, r += n; l < r; l /= 2, r /= 2) {  
		if (l % 2 != 0) {
			res = max(res, a[l++]);
		}
		if (r % 2 != 0) {
			res = max(res, a[--r]);
		}
	}
	return res;
}

void modify(int p, int val){
	int vt = n + p;
	a[vt] = val;
    while (vt > 1){
        if (vt % 2 == 0){
            a[vt/2]=max(a[vt], a[vt+1]);
            vt/=2;
        }
        else{
            a[(vt-1)/2]=max(a[vt-1], a[vt]);
            vt=(vt-1)/2;
        }
    }
}

int main() {
	//freopen("MR.txt", "r", stdin);
	cin >> n >> k;
	for (int i = n + 1; i <= 2 * n; i++) {
		cin >> a[i];
	}

	build();	
	//modify(4, 100);
	while (k > 0) {
		k--;
		cin >> l >> r;
		cout << '\t' << query(l, r+1) << endl;
	}
}
