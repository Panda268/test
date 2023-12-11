#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long h = n, d = 0;

    for (long long i = 1; i <= n; ++i) {
        long long square = i * i;
        int digits = log10(square) + 1;
        d += (h - trunc(sqrt(-1 + pow(10, digits - 1)))) * digits;
        h = trunc(sqrt(-1 + pow(10, digits - 1)));
    }

    cout << d << endl;
    return 0;
}
