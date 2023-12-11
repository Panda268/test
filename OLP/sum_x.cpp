#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

const int N = 40 + 2;
int n, x;
int t[N];
vector<int> A, B;

void TryX(int i, int sum) {
    if (sum > x) return;

    if (i > n / 2) A.push_back(sum);
    else {
        TryX(i + 1, sum);
        TryX(i + 1, sum + t[i]);
    }
}
void TryY(int i, int sum) {
    if (sum > x) return;

    if (i > n) B.push_back(sum);
    else {
        TryY(i + 1, sum);
        TryY(i + 1, sum + t[i]);
    }
}

int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) cin >> t[i];

    // Quay lui 2 tập X và Y
    TryX(1, 0);
    TryY(n / 2 + 1, 0);
    // Sắp xếp mảng A và B
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end());

    // Sử dụng kỹ thuật 2 con trỏ
    long long cnt = 0;
    for (int i = 0, j1 = 0, j2 = 0; i < A.size(); ++i) {
        int s = x - A[i]; // cần đếm lượng B[j] thoả B[j] = s
        while (j1 < B.size() && B[j1] < s) ++j1;
        while (j2 < B.size() && B[j2] <= s) ++j2;
        cnt += j2 - j1;
    }
    cout << cnt << '\n';
}