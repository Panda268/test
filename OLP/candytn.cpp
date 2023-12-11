#include<iostream>
#include<climits>
#include<cstdio>
using namespace std;
    
#define ll long long

ll k, n, m, i, j, c;
ll a[1000000]{};

void update(ll pos, ll val){
    ll vt = pos + n;
    a[vt] += val;
    while (vt > 1){
        if (vt%2==0){
            a[vt/2] = min(a[vt], a[vt+1]);
            vt /= 2;
        }
        else {
            a[(vt-1)/2] = min(a[vt-1], a[vt]);
            vt = (vt - 1) / 2;
        }
    }
}

ll query(ll l, ll r) {  
	ll res = INT_MAX; 
	for (l += n, r += n; l < r; l /= 2, r /= 2) {  
		if (l % 2 != 0) {
			res = min(res, a[l++]);
		}
		if (r % 2 != 0) {
			res = min(res, a[--r]);
		}
	}
	return res;
}

int main(){
    freopen("candy.inp", "r", stdin);
    cin >> n >> m;
    a[2*n+1] = INT_MAX;
    while (m>0){
        m--;
        cin >> k >> i >> j;
        if (k==1) update(i,j);
        else{
            if(i > j){
                cout << min(query(i,n+1), query(1,j+1)) << endl;
            }
            else
                cout << query(i,j+1) << endl;
        }
    }
}