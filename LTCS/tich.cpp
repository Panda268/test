#include<iostream>
using namespace std;

long long tich(int i){
    if (i == 11) return 11;
    return tich(i-11) * i;
}

int main(){
    int n;
    cin >> n;
    cout << tich(n*10 + n);
}