#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll n, k, a[100000]{};
	cin >> n >> k;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		a[i] += a[i-1];
	}
	ll maxSum = a[k];
	for (int i = k+1; i<=n; i++){
		if (a[i] - a[i-k] > maxSum) maxSum = a[i] - a[i-k];
	}
	cout << maxSum;
}
