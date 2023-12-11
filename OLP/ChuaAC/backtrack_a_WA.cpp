#include<iostream>
#include<climits>
#include<array>
#include<cstring>
using namespace std;

int n, k, a[51][51], ans = INT_MAX;
bool check[51];
int currSet[51], ansSet[51];
int currLen = 0; // biến toàn cục để lưu trữ độ dài của chu trình hiện tại
int currCnt = 1; // biến toàn cục để lưu trữ số lượng đỉnh đã thăm trong chu trình hiện tại
int last = 1; // biến toàn cục để lưu trữ đỉnh cuối cùng đã thăm trong chu trình hiện tại

void finding(){
    check[last] = false;
    for (int j = 1; j <= n; j++){
        if (check[j] && j != last) {
            check[j] = false;
            currCnt++;
            currLen += a[last][j]; // cập nhật độ dài của chu trình hiện tại
            currSet[currCnt] = j; 
            if (currCnt == k && currLen + a[j][1] < ans){
                    ans = currLen + a[j][1]; 
                    for (int i = 1; i <= k; i++) 
                        ansSet[i] = currSet[i];
            }
            if (currCnt < k && currLen < ans) {
                last = j; // cập nhật đỉnh cuối cùng đã thăm
                finding(); // truyền biến toàn cục vào hàm đệ quy
            }
            check[j] = true;
            currCnt--;
            last = currSet[currCnt]; // cập nhật lại đỉnh cuối cùng đã thăm
            currLen -= a[last][j]; // cập nhật lại độ dài của chu trình hiện tại
        }
    }
}

int main(){
    freopen("nhap.inp", "r", stdin);
    cin >> n >> k;
    memset(check, 1, sizeof(check));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j]; 
    finding();
    cout << ans << endl;
    cout << 1 << " ";
    for (int i = 2; i <= k; i++) 
        cout << ansSet[i] << " ";
}
