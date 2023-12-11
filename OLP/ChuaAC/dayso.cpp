#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

#define ll long long
const int maxN = 2*1e5;
ll a[maxN]{}, b[maxN], uocso[maxN];
ll Q, n;

int f(int x){
    while (x % 2 == 0)
        x /= 2;
    return x;
}

void build(){
    for (ll i = n; i >= 1; i--)
        a[i] = a[2*i] + a[2*i+1];
}

void update(ll pos, ll val){
    b[pos] = val;
    ll vt = pos + n;
    a[vt] = val + b[f(pos)];

    while (vt > 1){
        if (vt % 2 == 0){
            a[vt/2] = a[vt] + a[vt+1];
            vt /= 2;
        }
        else {
            a[(vt-1)/2] = a[vt-1] + a[vt];
            vt = (vt-1)/2;
        }
    }
}

ll tongLR(ll l, ll r){
    ll sum = 0;
    for (l += n, r += n; l < r; l /= 2, r /= 2){
        if (r%2 != 0)
            sum += a[--r];
        if (l%2 !=0)
            sum += a[l++];
    }
    return sum;
}

int main(){
    freopen("nhap.inp", "r", stdin);
    int k, l, r, c, q;
    cin >> n >> Q;
    for (ll i = n+1; i <= 2*n; i++){
        cin >> a[i];
        b[i-n] = a[i];
        a[i] += b[f(i-n)];
    }
    build();
    for (int q = 0; q < Q; q++){
        cin >> k;
        if (k==1){
            int i;
            cin >> i >> c;
            update(i, c);
        }
        else {
            cin >> l >> r;
            cout << tongLR(l,r+1) << endl;
        }
    }
    
}