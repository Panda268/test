#include<iostream>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;
int main(){
    freopen("nhap.inp", "r", stdin);
    freopen("nhap.out", "w", stdout);
    ll n, m, a[10000], t, x;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> t >> x;
        a[t] += x;
        if (a[t] > mod) a[t] -= mod;
    }
    ll tong = 0, tong_binh_phuong = 0;
    for (int i = 1; i <= m; i++) {
        tong = (tong + a[i]) % mod; // cập nhật tong
        tong_binh_phuong = (tong_binh_phuong + a[i] * a[i]) % mod; // cập nhật tong_binh_phuong
    }
    ll ans = ((tong * tong - tong_binh_phuong) / 2) % mod;
    cout << ans;
}