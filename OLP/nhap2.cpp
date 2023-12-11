#include <iostream>
using namespace std;

void input(int &n, int a[100]){
	cin >> n;
	for (int i = 0; i < n ; i++){
		cin >> a[i];
	}
}

//in so chan
void b1(int &n, int a[100]){
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)	
			cout << a[i] << " ";
}

int main(){
	
	
	//in so le 
	//tong 
	//tich
	//luy thua
	//max
	//min
	//dao nguoc
	//nguyen to
	int n, a[100];
	input(n,a);
	b1(n,a);
}
