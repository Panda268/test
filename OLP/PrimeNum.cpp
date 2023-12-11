#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 2; i*i <= n; i++){
		if (n%i == 0) {
			cout << n << " khong phai so nguyen to";
			return 0;
		}
	}
	cout << n << " la so nguyen to";
}
