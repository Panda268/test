#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

#define ll long long 

deque<int> decToBin(ll n){
    deque <int> a;
    while (n>0){
        a.push_back(n%2);
        n /= 2;
    }
    reverse(a.begin(), a.end());
    return a;
}


int binToDec(const deque<int>& binaryArray) {
    int ans = 0, k = binaryArray.size();
    for (int i = 0; i < k; ++i) {
        // Nhân chữ số nhị phân với 2^(số chữ số - 1 - vị trí) => lấy tổng tất cả
        ans += binaryArray[i] * (1 << (k - 1 - i));
    }
    return ans;
}

int main(){
    ll n;
    cin >> n;
    deque<int> bin = decToBin(n);
    int k = bin.size(), max = n;
    while (k>0){
        int cuoi = bin.back();
        bin.pop_back();
        bin.push_front(cuoi);
        if (binToDec(bin) > max)
            max = binToDec(bin);
        k--;
    }
    cout << max << endl;
    //Hoặc số lớn nhất là số có biểu diễn nhị phân có nhiều số 1 ở bên trái nhất
    // => đẩy bit k lần để tìm số nhị phân thoả mãn -> chuyển số đó sang thập phân
    // => kết quả
}