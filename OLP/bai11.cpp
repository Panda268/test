#include<iostream>
using namespace std;

int main(){
    int n, giaiThua = 1, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        giaiThua *= i;
        s += giaiThua;
    }
    cout << s;
}