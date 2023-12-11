#include<bits/stdc++.h>
#define ll long long

using namespace std;

int arr[1000000];


void sapxep(int n, int a[]){
	cout << "Xep tang dan: ";
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

void solve()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    int maxRight = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        maxRight = max(maxRight, a[i].second);
    }
    int arr[n];
    memset(arr, 0, sizeof(arr));
    int index;
    for (int i = 1; i <= maxRight / 2; i++)
    {
        index = i + i;
        while (index <= maxRight)
        {
            arr[index] += i;
            index += i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ll result = 0;
        for (int j = a[i].first; j <= a[i].second; j++)
        {
            result += arr[j];
        }
        cout << result << endl;
    }
}

int main()
{
    solve();
    return 0;
}
