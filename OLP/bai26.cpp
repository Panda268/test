#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = (n % 2 == 1) ? n : 0;
    for (int i = 1; i <= n/2; i++)
        if (n % i == 0 && i % 2 == 1)
            s *= i;
    cout << s;
}