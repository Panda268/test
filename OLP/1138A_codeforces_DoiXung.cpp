#include <iostream>
#include <cmath>
using namespace std;

int main() {
	freopen("nhap.inp", "r", stdin);
	int n;
    cin >> n;
    int ans = 1, a[n]{}, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for (int i = 0; i<n; i++){
		if (a[i] == 1) 
			cnt1++;
		else 
			cnt2++;
		
		if (i > 0 && a[i] != a[i-1]) {
			if (a[i] == 1) {
				ans = max (ans, 2 * min(cnt1, cnt2));
				cnt1 = 1;
			}
				
			else 
				if (a[i] == 2){
					ans = max (ans, 2 * min(cnt1, cnt2));
					cnt2 = 1;
				}					
		}
	}
	cout << ans;
}

