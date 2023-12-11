#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = (n % 2 == 0) ? n : 0;
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0 && i % 2 == 0)
            s += i;
    };
    cout << s;
}