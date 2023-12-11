#include <iostream>
using namespace std;

const int modulo = 14062008;

int main(){
	int n, k, a[100001]{}, f[100001]{};
	cin >> n >> k;
	for (int i = 0; i<k;i++){
		int m;
		cin >> m;
		a[m] = 1;
	}
	
	for (int i = 1; i <= n; i++){
		if (a[i]) f[i] = f[i-1];
		else if ((i==1||i==2) && a[i]) f[i] = 1;
			else f[i] = (f[i-1] * f[i-2]) % modulo;
	}
	cout << f[n];
}
