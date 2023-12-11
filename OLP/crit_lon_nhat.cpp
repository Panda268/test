#include<iostream>
#include<deque>

using namespace std;

int main(){
    int n, k, a[1000];
    int dp[1000]{}; //lưu giá trị của vị trí không đánh chí mạng
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    a[n+1] = 0;//tạo phần tử giả để lấy min trong đoạn tịnh tiến cuối cùng
    deque <int> dq;
    int ans = 0;
    while (dq.size()) dq.pop_front();
    dq.push_back(0);
    for (int i = 1; i <= n + 1; i++){
        while (dq.size() && dq.front() < i - k)
            dq.pop_front();
        dp[i] = dp[dq.front()] + a[i];
        ans += a[i];
        while(dq.size() && dp[dq.back()] >= dp[i]) 
            dq.pop_back();
        dq.push_back(i);
    }
    cout << ans - dp[n+1];
}
