#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
	int t;
	cin >> t;
	while (t){
		int m, n;
	    cin >> m >> n;
	    int k = gcd(m, n);
	    int minSquares = (m * n) / (k * k);
	    cout << minSquares;
	    if (t>1) cout << endl;
	    t--;
	}	
    return 0;
}

