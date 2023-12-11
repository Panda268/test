#include <bits/stdc++.h>

using namespace std;

int a[1000][1000] {0}, F[1000][1000], c = 0, N;

int max3(int x, int y, int z){
	int maxtemp = max(x,y);
	maxtemp = max(maxtemp,z);
	return maxtemp;
}
void nhap(){
	int x,y;
	ifstream fi("2BS.INP");
	fi >> N;
	while(fi >> x >> y){
		c++;
		a[x][y] = 1;
	}
	fi.close();
}

int main(){
	nhap();
	for (int i = 1; i<=N; i++){
		for (int j = 1; j<=N; j++){
			a[i][j] == 1 ? F[i][j] = max3(F[i-1][j-1]+1, F[i-1][j], F[i][j-1]) : F[i][j] = max(F[i-1][j], F[i][j-1]); 
		}
	}
	cout << F[N][N];
}
