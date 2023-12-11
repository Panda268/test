#include<iostream>
#include<cstdio>
using namespace std;

#define ll long long
ll a[400000];
int n, q;

void build(){
    for (ll i = n; i >= 1; i--)
        a[i] = a[2*i] + a[2*i+1];
}

void update(ll pos, ll val){
    pos += n;
    a[pos] = val;
    while(pos > 1){
        if (pos % 2 == 0){
            a[pos/2] = a[pos] + a[pos+1];
            pos /= 2;
        }
        else {
            a[(pos-1)/2] = a[pos-1] + a[pos];
            pos = (pos-1)/2;
        }
    }
}

ll query(ll l, ll r){
    ll ans = 0;
    for (l += n, r += n; l < r; l /= 2, r/= 2){
        if (l % 2 != 0)
            ans += a[l++];
        if (r % 2 != 0)
            ans += a[--r]; 
    }
    return ans;
}

int main(){
    //freopen("nhap.inp", "r", stdin);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> q;
    for (ll i = n+1; i <= 2*n; i++)
        cin >> a[i];
    build();
    while (q--){
        ll x, y, z;
        cin >> x >> y >> z;
        if (x == 1)
            update(y, z);
        else 
            cout << query(y, z+1) << endl;
    }
}