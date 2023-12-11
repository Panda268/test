#include<iostream>
using namespace std;

bool snt(int n){
    if (n<2) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main(){
    int na, nb = 0, nc = 0;
    int a[1000], b[1000], c[1000];
    cin >> na;
    for (int i = 0; i < na; i++)
        cin >> a[i];
    for (int i = 0; i < na; i++)
        if (snt(a[i]))
            b[nb++] = a[i];
        else c[nc++] = a[i];
    for (int i = 0; i < nb; i++)
        cout << b[i] << " ";
    cout << endl;
    for (int i = 0; i < nc; i++)
        cout << c[i] << " ";
}