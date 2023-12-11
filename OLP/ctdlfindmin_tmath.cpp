#include<iostream>
#include<stack>
using namespace std;

#define maxn 1000001
stack<int> s;
int a[maxn];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++){
        while (s.size() && a[i] >= a[s.top()])
            s.pop();
        if (s.empty())  
            cout << -1 << " ";
        else
            cout << s.top() << " "; 
        s.push(i);
    }
}