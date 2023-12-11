#include<iostream>
#include<vector>
using namespace std;

void sang(int b, vector<bool>& nt){
    for (int i = 2; i*i <= b; i++)
        if (nt[i])
            for (int j = 2; j <= b/i; j++)
                nt[i*j] = false;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b;
    cin >> a >> b;
    vector<bool> nt(b+1, true);
    sang(b, nt);
    // for (int i = 0 ; i < 10; i++)
    //     cout << i << " = " << nt[i] << endl;
    for (int  i = a; i <= b; i++)
        for (int j = 2; j*j <= i; j++)
            if (i % j == 0)
                if (nt[j] && i % (j*j) == 0){
                    cout << i << " ";
                    break;
                }
}