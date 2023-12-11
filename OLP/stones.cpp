#include <bits/stdc++.h>

using namespace std;

int f[1000][1000]{0};

void nhap(){
	ifstream fi("stones.INP");
	fi >> n;
	s[0] = 0;
	for (int i = 1; i<=n; i++){
		fi >> v;
		s[i] = s[i-1] + v;
	}
	fi.close();
}

int main(){
	nhap();
	int m = s1.length(), n = s2.length();
	for (int i = 1; i<=m; i++){
		for (int j = 1; j<=n; j++){
			if (s1[i-1] == s2[j-1]) {
				f[i][j] = f[i-1][j-1] + 1;
			} 
			else f[i][j] = max(f[i-1][j], f[i][j-1]);
		}
	}
	cout << f[m][n] << endl;
	
	for (int i = 1; i<=m; i++){
		for (int j = 1; j<=n; j++){
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	string ans_st = "";
	while (m>0 || n>0){
		if (s1[m-1] == s2[n-1]) {
			ans_st = s1[m-1] + ans_st;
			m--;
			n--;
		} 
		else 
			if(f[m-1][n] >= f[m][n-1]){
			m--;
			}
			else n--;
	}
	cout << ans_st;
}
