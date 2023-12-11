#include <iostream>
#include <cmath>
using namespace std;

#define ll long long 

ll sum(ll a, ll b) {
    return (a + b) * (b - a + 1) / 2;
}

ll chenhlech(ll l, ll m, ll r) {
    return abs(sum(l, m) - sum(m + 1, r));
}

ll find_m(ll l, ll r) {
    ll L = l; 
    ll R = r; 
    while (L < R) { 
        ll M = (L + R) / 2;
        ll chenh1 = chenhlech(l, M, r); 
        ll chenh2 = chenhlech(l, M + 1, r); 
        if (chenh1 < chenh2) 
            R = M; 
        else 
            if (chenh1 > chenh2) 
                L = M + 1; 
            else 
                return M; 
    }
    return L; 
}

int main() {
    freopen("nhap.inp", "r", stdin);
    ll l, r;
    for (int i = 0; i < 10; i++){
        cin >> l >> r;
        cout << find_m(l, r) << endl;
    }
    return 0;
}
