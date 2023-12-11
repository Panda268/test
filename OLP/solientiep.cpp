#include<iostream>
#include<string>
#include<cmath>
using namespace std;

#define ll long long

ll dodai(ll n){
  ll numlen = 1;
  ll beginn = 1;
  ll endd = 9;
  ll ans = 0;
  while (endd < n){
      ans += numlen*(endd-beginn+1);
      beginn *= 10;
      endd = endd*10+9;
      numlen++;
  }
  ans += numlen*(n-beginn+1);
  return ans;
}

char digit_at(ll k) {
  ll numlen = 1; 
  long count = 9; // số lượng các số trong đoạn hiện tại
  ll start = 1; // số đầu tiên của đoạn hiện tại
  while (k > numlen * count) { // lặp cho đến khi tìm được đoạn chứa k
    k -= numlen * count; // trừ đi số chữ số của các đoạn trước
    numlen++; 
    count *= 10; 
    start *= 10; 
  }
  start += (k - 1) / numlen; // tìm số chứa chữ số thứ k
  string s = to_string(start); // chuyển số đó thành chuỗi
  return s[(k - 1) % numlen]; // trả về chữ số tương ứng trong chuỗi
}

int main(){
  ll n, k;
  cin >> n >> k;
  cout << dodai(n) << endl;
  cout << digit_at(k);
}