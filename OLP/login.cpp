#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	string st;
	vector<string> psw;
	unordered_map<string, int> cnt;
	for (int i = 0; i < n; i++) {
		cin >> st;
		psw.push_back(st);
		for (int j = 0; j < psw[i].size(); j++) {
			string curr = "";
			for (int k = j; k < psw[i].size(); k++) {
				curr += psw[i][k];
				cnt[curr]++;
			}		
		}
	}
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += cnt[psw[i]];
	}
	cout << ans - n;
}
