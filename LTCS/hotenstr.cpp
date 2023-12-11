#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 32) break;
        cout << s[i];
    }
    cout << endl;
    string ten = "";
    for (int i = s.length()-1; i >= 0; i--){
        if (s[i] == 32) break;
        ten = s[i] + ten;
    }
    cout << ten;
}