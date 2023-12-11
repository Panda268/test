#include <bits/stdc++.h>
using namespace std;

int h[100000],n;

int largestRectangleArea() {
	stack <int> s;
	int ans = 0, i = 0;
	for (int i = 0; i<=n; i++){ //i<"="n de tinh dien tich cuoi cung
		while(s.size() && (i == n || h[i]<=h[s.top()])){
			int height = h[s.top()];
			s.pop();
			int width = s.empty() ? i : i - s.top() - 1;
			ans = max (ans, width*height);
		}
		s.push(i);
	}
	return ans;
}

int main() {
	//freopen("MR.txt", "r", stdin);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}

	cout << largestRectangleArea();
}

