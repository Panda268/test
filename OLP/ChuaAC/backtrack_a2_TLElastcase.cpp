#include<iostream>
#include<climits>
#include<array>
#include<cstring>
using namespace std;

int n, k, a[51][51], cnt = 1, s = 0, ans = INT_MAX;
bool check[51];
int currSet[51], ansSet[51];

void finding(int i){
    check[i] = false;
    for (int j = 1; j <= n; j++){
        if (check[j] && j != i) {
            check[j] = false;
            cnt++;
            s += a[i][j];
            currSet[cnt] = j; 
            if (cnt == k && s + a[j][1] < ans){
                    ans = s + a[j][1]; 
                    for (int i = 1; i <= k; i++) 
                        ansSet[i] = currSet[i];
            }
            if (cnt < k && s < ans) 
                finding(j);
            check[j] = true;
            cnt--;
            s -= a[i][j]; 
        }
    }
}

int main(){
    freopen("nhap.inp", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    memset(check, 1, sizeof(check));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j]; 
    finding(1);
    cout << ans << endl;
    cout << 1 << " ";
    for (int i = 2; i <= k; i++) 
        cout << ansSet[i] << " ";
}
