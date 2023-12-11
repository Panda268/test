#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int gcd(int a, int b){
    while (a > 0){
        int temp = a;
        a %= b;
        b = temp;
    }
    return b;
}

int main(){
    freopen ("nhap.inp", "r", stdin);
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = abs(x2-x1);
    int dy = abs(y2-y1);
    int ans = (gcd(dx, dy) - 1) / 2 + 2;
    //cout << gcd(2,4) << endl;
    cout << ans;
}