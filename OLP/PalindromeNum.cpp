#include <iostream>
using namespace std;

int main(){
	string n;
	cin >> n;
	for (int i = 0; i <= (n.length()-1)/2; i++){
		if(n[i] != n[n.length()-i-1]) {
			cout << n << " khong phai so doi xung";
			return 0;
		}
	}
	cout << n << " la so doi xung";
}
