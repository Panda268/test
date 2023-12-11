#include <iostream>
using namespace std;

#define ull unsigned long long
#define ll long long
#define ld long double

#define fi first
#define se second
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x * y / __gcd(x, y)

const int mod = 1e9 + 7;
const int inf = 1e9 + 7;
const int mxN = 2e5 + 5;

struct node {
    int sum, lazy;
};

int n, q;
ll a[mxN], d[mxN], st[4 * mxN];

int f(int x) {
    while (x % 2 == 0) {
        x /= 2;
    }
    return x;
}

void build(int i, int l, int r) {
    if (l == r) {
        st[i] = a[l] + a[d[l]];
        return;
    }
    int m = (l + r) / 2;
    build(i * 2, l, m);
    build(i * 2 + 1, m + 1, r);
    st[i] = st[i * 2] + st[i * 2 + 1];
}

void update(int i, int l, int r, int p, int val) {
    if (p < l || p > r) {
        return;
    }
    if (l == r) {
        st[i] = val;
        return;
    }
    int m = (l + r) / 2;
    update(i * 2, l, m, p, val);
    update(i * 2 + 1, m + 1, r, p, val);
    st[i] = st[i * 2] + st[i * 2 + 1];
}

ll get(int i, int l, int r, int u, int v) {
    if (v < l || u > r) {
        return 0;
    }
    if (u <= l && r <= v) {
        return st[i];
    }
    int m = (l + r) / 2;
    return get(i * 2, l, m, u, v) + get(i * 2 + 1, m + 1, r, u, v);
}

void solve() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[i] = f(i);
    }
    build(1, 1, n);
    while (q--) {
        int type, x, y;
        cin >> type >> x >> y;
        if (type == 1) {
            a[x] = y;
            if (x % 2 == 0) {
                update(1, 1, n, x, a[x] + a[d[x]]);
            }
            else {
                for (int i = x; i <= n; i *= 2) {
                    update(1, 1, n, i, a[i] + a[d[x]]);
                }
            }
        }
        else {
            cout << get(1, 1, n, x, y) << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("nhap.inp", "r", stdin);
    solve();
}