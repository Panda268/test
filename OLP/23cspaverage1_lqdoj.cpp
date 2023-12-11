#include <iostream>
#include <map>
using namespace std;

#define ll long long 

int main() {
    ll n, k, res = 0;
    map<ll, ll> pos;
    ll presum[100001]{};
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        presum[i] = presum[i - 1] + (x - k);
        if (pos.count(presum[i]) == 0) pos[presum[i]] = i;
        else res = max(res, i - pos[presum[i]]);
    }
    cout << res;
}

