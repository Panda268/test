#include <iostream>
using namespace std;

int gcd(int a, int b){
	while(b){
		int temp = b;
		b = a%b;
		a = temp;
	}
	return a;
}

int main(){
	int m,n;
	cin >> m >> n;
	cout << gcd(m,n);
}
