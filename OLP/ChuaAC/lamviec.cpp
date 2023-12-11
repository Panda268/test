#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

#define pii pair<int,int>

bool cmp(pii a, pii b) {
    return a.first > b.first;
}

int main(){
    freopen("nhap.inp", "r", stdin);
    int n, m;
    vector<pii> a(100);
    string vitri[100]; //luu cac cong viec thuc hien cua may thu i
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        a.push_back({x,i});
    }
    sort(a.begin()+1, a.end()+1, cmp);
    priority_queue<pii, vector<pii>, greater<pii>> may; //thoi_gian, may_thu_i
    for (int i = 1; i <= m; i++)
        may.push({0,i});
    int ans = a[1].first;
    for (int i = 1; i <= n; i++){
        pii temp = may.top();
        may.pop();
        may.push({temp.first+a[i].first, temp.second});
        ans = max(ans, temp.first+a[i].first);
        string s = to_string(a[i].second);
        vitri[temp.second] = vitri[temp.second] + s + ' ';
    }
    
    cout << ans << endl;
    for (int i = 1; i <= m; i++){
        cout << vitri[i] << endl;
    }
}
