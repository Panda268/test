#include<bits/stdc++.h>
using namespace std;
vector <int> F;

int main() {
	int n; 
	priority_queue <int, vector<int>, greater<int> > pq;
	cin >> n;
	for (int i = 0; i < n; i++){
		int k;
		cin >> k;
		pq.push(k);
	}
	
	int ans = 0;
	for (int i=0; i<F.size(); i++) 
		pq.push(F[i]);
	while (!pq.empty()){
	  		int x = pq.top(); pq.pop();
	  		if(pq.empty()) cout << ans;
	  		else{
		  		int y = pq.top(); pq.pop(); 
		  		ans += x + y;
		  		pq.push(x+y);
			}
	}
}
