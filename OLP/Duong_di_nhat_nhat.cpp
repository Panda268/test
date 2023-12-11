#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define ll long long
const ll inf =  1e9, maxn = 100001;
vector <pair<int,int> > adj[maxn];
int n, m, pre[maxn];

void nhap(){
	int x,y,w;
	cin >> n >> m;
	for (int i = 0; i<m; i++){
		cin >> x >> y >> w;
		adj[x].push_back({y, w});
		adj[y].push_back({x, w});
	}
}

void dijkstra(int s){
	vector<ll> d(n+1,inf);
	d[s] = 0;
	priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > Q; //khoang cach, dinh
	Q.push({0, s});
	while (!Q.empty()){   //trong khi chua mark het thi chon ra dinh co khoang cach tu dinh s la nho nhat
		pair <int, int> top = Q.top(); 
		Q.pop();  
		int kc = top.first;
		int u = top.second;
		if(kc>d[u]) continue;
		for (const pair<int, int>& it : adj[u]){
			int v = it.first;
			int w = it.second;
			if(d[v] > d[u] + w) {
				d[v] = d[u] + w;
				Q.push({d[v],v});
				pre[v] = u;
			}
		}
	}
}
int main(){
	
}
