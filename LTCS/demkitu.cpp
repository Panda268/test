#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "Hello", s2 = "World";
    int a[256]{0};
    // getline(cin, s1);
    // getline(cin, s2);
    cout << s1 << endl << s2 << endl;
    s1 += s2;
    cout << s1 << endl;
    for (int i = 0; i < s1.length(); i++)
        a[s1[i]]++;
    cout << "Cac ki tu xuat hien: "; 
    for (int i = 0; i < 256; i++)
        if (a[i]>0) 
            cout << char(i);

}
