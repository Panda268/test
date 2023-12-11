#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> binToDec(int n){
    vector<int> a;
    while(n>0){
        a.push_back(n%2);
        n/=2;
    }
    reverse(a.begin(), a.end());
    return a;
}

int cnt1(vector<int> a){
    int temp = 0;
    for (int ii : a)
        if (ii==1)
            temp++;
    return temp;
}

int main(){
    int n = 50;
    for (int i = 1; i <= n; i++){
        vector<int> bin = binToDec(i);
        cout << "i = " << i << " " << cnt1(bin) << endl;

    }
}