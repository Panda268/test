#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("nhap.inp", "r", stdin);
	long long ans = 0, n;
	int cnt[1000000]{}, a[100000];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 1, j = 0; i <= n; i++){
		while (j+1<=n && cnt[a[j+1]]==0){
			j++;
			cnt[a[j]]++;
		}
		ans += j - i + 1;
		cnt[a[i]]--;
	}
	cout << ans;
}

