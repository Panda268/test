#include<iostream>
using namespace std;

#define ll long long
const ll maxn = 1e5+5;
ll t[4*maxn], a[maxn];
int n, q;

ll merge(ll i, ll j){//trả về chỉ số có giá trị max khi so sánh 2 bên trái phải
    return (a[i] > a[j]) ? i : j;
}

void build (ll id, ll l, ll r){
    if (l == r){
        t[id] = l;
        return;
    }
    ll m = (l+r)/2;
    build (id*2, l, m);
    build (id*2+1, m+1, r);
    t[id] = merge(t[id*2], t[id*2+1]);
}

void update(ll id, ll l, ll r, ll pos){
    if (pos < l || pos > r) return;
    if (l == r){
        t[id] = pos;
        return;
    }
    ll m = (l+r)/2;
    update (id*2, l, m, pos);
    update (id*2+1, m+1, r, pos);
    t[id] = merge(t[id*2], t[id*2+1]);
}

ll get(ll id, ll l, ll r, ll u, ll v){//trả về chỉ số có giá trị max
    if (l > v || r < u)
        return 0;
    if (u <= l && r <= v)
        return t[id];
    ll m = (l+r)/2;
    ll maxTraiIdx = get(id*2, l, m, u, v);
    ll maxPhaiIdx = get(id*2+1, m+1, r, u, v);
    return merge(maxTraiIdx, maxPhaiIdx);
}

ll mul(ll a, ll b, ll MOD){
    if (b == 0) return 0;
    ll t = mul(a, b/2, MOD)*2;
    if (b % 2 == 1) t += a;
    return (t % MOD);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    a[0] = 1;
    cin >> q;
    ll type, x, u, v, MOD;
    while (q--){
        cin >> type;
        if (type == 0){          
            cin >> x >> v;
            a[x] = v;
            update(1, 1, n, x);
        }
        else{
            cin >> u >> v >> MOD;
            if (u == v){                        //quan trong
                cout << a[u] % MOD << endl;
            }
            else{
                ll max1Idx = get (1, 1, n, u, v);
                ll max2Idx = merge(get(1, 1, n, u, max1Idx-1), get(1, 1, n, max1Idx+1, v));
                cout << mul(a[max1Idx], a[max2Idx], MOD) << endl;
            }
            
        }
    }
}
