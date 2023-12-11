#include<iostream>
using namespace std;

void input(int& n, int a[]){
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void timmax(int n, int a[]){
    int ans = a[0];
    for (int i = 1; i < n; i++)
        ans = max(ans, a[i]);
    cout << "Max = " << ans;
}

void mangchan(int n, int a[]){
    bool chan = true;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 1){
            chan = false;
            break;
        }
    if(chan) 
        cout << "Mang chan";
    else cout << "Mang khong chan";
}

int main(){
    int n, a[100];
    input(n,a);
    //timmax(n,a);
    mangchan(n, a);
}