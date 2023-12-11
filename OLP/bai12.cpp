#include<iostream>
using namespace std;

int main(){
    int n, x, luyThua = 1, s = 0;
    cin >> x >> n;
    for (int i = 1; i <= n; i++){
        luyThua *= x;
        s += luyThua;
    }
    cout << s;
}