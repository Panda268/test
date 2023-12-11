#include<iostream>
using namespace std;

#define ll long long
#define maxn 200000
ll t[maxn*4];
int a[maxn], n, q;

void build(int id, int l, int r){
    if (l == r){
        t[id] = a[l];
        return;
    }
    int m = (l+r) / 2;
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    t[id] = t[id*2] + t[id*2+1];
}

ll get(int id, int l, int r, int u, int v){
    if (l > v || r < u) 
        return 0;
    if (u <= l && r <= v) 
        return t[id];
    int m = (l+r) / 2;
    return get(id*2, l, m, u, v) + get(id*2+1, m+1, r, u, v);
}

void update(int id, int l, int r, int pos, int val){
    if (pos < l || pos > r)
        return;
    if (l == r) {
        t[id] = val;
        return;
    }
    int m = (l+r) / 2;
    update(id*2, l, m, pos, val);
    update(id*2+1, m+1, r, pos, val); 
    t[id] = t[id*2] + t[id*2+1];
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    while (q--){
        int type, pos, val, u, v;
        cin >> type;
        if (type == 1){
            cin >> pos >> val;
            update(1, 1, n, pos, val);
        }
        else {
            cin >> u >> v;
            cout << get(1, 1, n, u, v) << '\n';
        }
    }
}
