#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n = s.length();
    for (int i = 0; i < n; i++){
        if (i==0 && s[i]>='a' && s[i]<='z')
            s[i] -= 32;
        if (i>0 && s[i]>='A' && s[i]<='Z')
            s[i] += 32;
    }
    cout << s;
}