#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    freopen("nhap.inp", "r", stdin);
    cin >> t;
    for (int i = 1; i <= t; i++) {
        long long l, r;
        cin >> l >> r;
	    for (int k = 39; k >= 1; k--){
	        int x=2;
	        while (pow(x,k) <= r)
	            x++;
	        if (pow(x-1, k) >= l && x > 2)
	        {
	            cout << "Case #" << i << ": " << k  << endl;
	            break;
	        }
	    }
    }
}

