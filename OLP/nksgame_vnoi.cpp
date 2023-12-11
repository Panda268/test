#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int min4(int a, int b, int c, int d){
    int minn = a;
    if (minn > b) minn = b;
    if (minn > c) minn = c;
    if (minn > d) minn = d;
    return minn;
}

int main() {
	freopen ("nhap.inp", "r", stdin);
    int n; 
    cin >> n;
    int b[100001]{}, c[100001]{}; 
    for (int i = 1; i <= n; i++) {
        cin >> b[i]; 
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[i]; 
    }  
    sort(b + 1, b + n + 1); 
    sort(c + 1, c + n + 1); 
	int ans = abs(b[1] + c[1]);
    for (int i = 1; i <= n; i++){
        int l = 1, r = n;
        int m;
        while (l<=r){
            m = (l+r) / 2;
            if (c[m] == -b[i]) {
                cout << 0;
                return 0;
            }
            else 
                if (c[m] > -b[i])
                    r = m - 1;
                else l = m + 1;
        }
        if (m == 1) 
            ans = min4(ans, abs(b[i] + c[m]), abs(b[i] + c[m+1]), INT_MAX);
            else    
                if (m == n) 
                    ans = min4(ans, abs(b[i] + c[m]), abs(b[i] + c[m-1]), INT_MAX);
                else
                    ans = min4(ans, abs(b[i] + c[m]), abs(b[i] + c[m-1]), abs(b[i] + c[m+1]));
    }
    cout << ans;
    return 0;
}