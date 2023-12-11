#include <iostream>
using namespace std;

int main(){
	int n, s = 1;
	cin >> n;
	for (int i = 2; i*i <= n; i++){
		if (n%i == 0) {
			s += i;
			s += n/i;	
		}
	}
	if (s==n) cout << n << " la so hoan hao";
	else cout << n << " khong phai so hoan hao";
}
