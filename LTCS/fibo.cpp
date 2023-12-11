#include<iostream>
using namespace std;

int a[100] = {0, 1, 1}, b[100]{};

int fibo1(int i){//de quy
    if (i == 0) return 0;
    if (i == 1) return 1;
    return fibo1(i-1) + fibo1(i-2);
}

int fibo2(int n){ //vong lap for
	if (n <= 2) return a[n];
	for (int i = 3; i <= n; i++)
		a[i] = a[i-2] + a[i-1];
}

int main(){
    int n;
    cin >> n;

    //in day fibo
    for (int i = 0; i <= n; i++)
		cout << fibo1(i) << " ";
    cout << endl;

    //in tam giac fibo
    for (int i = 1; i <= n; i++){
        b[i] = fibo1(i);
        for (int j = 0; j <= i; j++){
            cout << b[j] << " ";
        }
        cout << endl;
    }
}
