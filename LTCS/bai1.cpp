#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if (n <= 0){
		cout << "Nhap lai";
		return 0;
	}
	float s = 0;
	for (int i = 1; i <= n; i++){
		s += 1.0/i;
	}
	cout << s;
}
