#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n, a[1000];
	bool check[10000];
	memset(check, true, sizeof(check));
	cin >> n;
	for (int i = 0; i < n; i++)	
		cin >> a[i];
	int k = n / 2;
	
	int daso = 0;
	for (int i = 0; i < n; i++){
		int cnt = 1;
		if (check[a[i]]) 
			for (int j = i + 1; j < n; j++){
				if (a[j] == a[i]) 
					cnt++;
		}
		check[a[i]] = false;
		if (cnt >= k) daso = a[i];
	}
	cout << "Da so: " << daso << endl;
	cout << "Thieu so: ";
	memset(check, true, sizeof(check));
	for (int i = 0; i < n; i++){
		if (check[a[i]] && daso != a[i]) cout << a[i] << " ";
		check[a[i]] = false;
	}

}
