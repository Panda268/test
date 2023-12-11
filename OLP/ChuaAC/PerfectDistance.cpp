#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    freopen ("nhap.inp", "r", stdin);
    int a, b, d;
    cin >> a >> b;
    vector<int> t(b+1);

    for (int i = 1; i <= b/2; i++){
    	d = 2*i;
    	while (d <= b){
    		t[d] += i; 
			d += i;
		}
	}
	
    int64_t ans = 0;
    for (int i = a; i <= b; i++)
    	ans += abs (i - t[i]);
    cout << ans;
}
