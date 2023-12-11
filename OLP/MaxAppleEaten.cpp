#include <bits/stdc++.h>


using namespace std;
#define pair2int pair<int,int>

vector <int> apples, days;
int n;

int eatenApples() {
    int i = 0, ans = 0;
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    while (i<n || pq.size()) {
    	if(i<n && apples[i]>0){
    		pq.push({i+days[i]-1, apples[i]});
		}
		while (pq.top().first<i && pq.size()){
			pq.pop();
		}
		if (pq.size()){
			int x = pq.top().first;
			int y = pq.top().second;
			pq.pop();
			if(y>1){
				pq.push({x,--y});
			}
			ans++;
		}
		i++;
	}
	return ans;
}

int main() {
	freopen("MaxEatenApples.txt", "r",stdin);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        apples.push_back(k);
    }
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        days.push_back(k);
    }
    int result = eatenApples();
    cout << result; 
}

