#include <iostream>
#include <string>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    while (b) {
        ll temp = b;
        b = (a % b);
        a = temp;
    }
    return a;
}

ll reverseNumber(ll n) {
    ll reversedNum = 0;
    while (n > 0) {
        reversedNum = (reversedNum * 10) + (n % 10);
        n /= 10;
    }
    return reversedNum;
}

bool check(ll n) {
    ll m = reverseNumber(n);
    return gcd(n, m) == 1;
}

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n;
        cin >> n;
        if (check(n)) cout << "YES";
        else cout << "NO";
        if (t > 1) cout << endl;
        t--;
    }
    return 0;
}

