#include <iostream>
using namespace std;

void input(int& n, int a[1000]){
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
}

void printArr(int n, int a[1000]){
	for (int i = 0; i < n; i++) 
		cout << a[i] << " ";
	cout << endl;
}

bool checkPrime(int n){
	if (n < 2) return false;
	for (int i = 2; i*i <=n; i++)
		if (n % i == 0) return false;
	return true;
}

void primeSum(int n, int a[1000]){
	int s = 0;
	for (int i = 0; i < n; i++)
		if (checkPrime(a[i])) s += a[i];
	cout << s << endl;
}

void swap(int&a, int& b){
	int temp = a;
	a = b; 
	b = temp;
}

void chanDauLeCuoi (int n, int a[1000]){
	int check[1000];
	for (int i = 0; i < n; i++){
		if (a[i] % 2 == 0) 
			check[i] = 0;
		else check[i] = 1;
	}
	for (int i = 0; i < n; i++){
		if (check[i] == 0) cout << a[i] << " ";  
	}
	for (int i = 0; i < n; i++){
		if (check[i] == 1) cout << a[i] << " ";  
	}
}

int main(){
	int n,a[1000];
	input(n,a);
	printArr(n,a);
	primeSum(n,a);
	chanDauLeCuoi(n,a);
}
