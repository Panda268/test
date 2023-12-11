#include<iostream>
#include<deque>
using namespace std;

int main(){
    int n, k, a[1000], minRange[1000];
    deque <int> dq;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    while (dq.size()) dq.pop_front();
    
    for (int i = 1; i <= n; i++){
        while (dq.size() && a[dq.back()] >= a[i]) 
            dq.pop_back();
        dq.push_back(i);
        if (dq.front() + k <= i) dq.pop_front();
        if (i >= k) minRange[i] = a[dq.front()];
        else {
            if (i == 1) minRange[1] = a[1];
            else
                minRange[i] = min(minRange[i-1], a[i]);
        };
    }
    for (int i = 1; i <= n; i++)
        cout << minRange[i] << " ";
}