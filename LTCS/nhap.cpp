#include<iostream>
using namespace std;

int tich(int n){
	if (n==1) return 1;
	return n*tich(n-1);
}

int main(){
	int tong = 0;
	int n = 3;
	for (int i = 1; i <= n; i++){
		tong += tich(i);
	}
	cout << tong;
}
