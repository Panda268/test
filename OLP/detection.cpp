#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k>0){
    	int n, m;
    	cin >> n >> m;
		cout << 2 * min(n,m) - 2;
    	cout << '\n';
    	k--;
	}
    return 0;
}

