#include<iostream>
#include<cmath>
using namespace std;

void input(int& x, int& n){
    cout << "Nhap x va n: ";
    cin >> x >> n;
}

void b1(int n){ //tinh tong tu 1 den n
    if (n <= 0) cout << "Loi" << endl;
    cout << (n*(n+1))/2 << endl;
}

void b2(int n){ //tinh tong binh thuong cac so tu 1 den n
    if (n <= 0) cout << "Loi" << endl;
    int s = 0;
    for (int i = 1; i <=n; i++)
        s += i*i;
    cout << s << endl;
}

void b11(int n){ //tinh tong tu 1! den n!
    if (n <= 0) cout << "Loi" << endl;
    int giaiThua = 1, s = 0;
    for (int i = 1; i <= n; i++){
        giaiThua *= i;
        s += giaiThua;
    }
    cout << s << endl;
}

void b12(int x, int n){//tinh tong tu x^1 den x^n
    if (n <= 0) cout << "Loi" << endl;
    int luyThua = 1, s = 0;
    for (int i = 1; i <= n; i++){
        s += pow(x, i);
    }
    cout << s << endl;
}

void b25(int n){//ting tong uoc so chan cua so nguyen duong n 
    if (n <= 0) cout << "Loi" << endl;
    int s = (n % 2 == 0) ? n : 0;
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0 && i % 2 == 0)
            s += i;
    };
    cout << s << endl;
}

void b26(int n){//tinh tich uoc so le cua so nguyen duong n
    if (n <= 0) cout << "Loi" << endl;
    int s = (n % 2 == 1) ? n : 1;
    for (int i = 3; i <= n/2; i++)
        if (n % i == 0)
            if (i % 2 == 1)
                s *= i;
            else if (((n/i) != i) && ((n/i) % 2 == 1))
                s *= n/i;
    cout << s << endl;
}

void b45(int n){//tich cac chu so cua so nguyen duong n
    if (n <= 0) cout << "Loi" << endl;
    int ans = 1;
    while (n > 0){
        ans *= n % 10;
        n /= 10;
    }
    cout << ans << endl;
}

void b46(int n){//so luong chu so le cua so nguyen duong n
    if (n <= 0) cout << "Loi" << endl;
    int ans = 0;
    while (n > 0){
        if ((n % 10) % 2 == 1) ans++;
        n /= 10;
    }
    cout << ans << endl;
}

void b61(int n){//kiem tra cac chu so cua so nguyen duong n co giam dan khong
    if (n <= 0) cout << "Loi" << endl;
    bool check = true;
    while (n > 10){
        int truoc = n % 10;
        n /= 10;
        int sau = n % 10;
        if (sau >= truoc) {
            check = false;
            break;
        }
    }
    if (check) cout << "True" << endl;
    else cout << "False" << endl;
}

void b62(int a, int b){//uoc chung lon nhat cua 2 so
    while (a != 0){
        int temp = a;
        a = a % b;
        b = temp;
    }
    cout << b;
}

void b64(int a, int b){//giai phuong trinh bac 1
    if (a == 0 && b == 0)
        cout << "Vo so nghiem";
    else if (a == 0 && b != 0)
            cout << "Vo nghiem";
        else cout << "Nghiem = " << -(float)b/a;
    cout << endl;
}

bool primeCheck(int n){
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void b85(int n){//tinh tong cac so nguyen to nho hon n
    if (n <= 0) cout << "Loi" << endl;
    int s = 0;
    for (int i = 2; i < n; i++)
        if (primeCheck(i)) s += i;
    cout << s << endl; 
}

int main(){
    int n, x;
    input(x, n);
    cout << "Bai 1: "; b1(n);
    cout << "Bai 2: "; b2(n);
    cout << "Bai 11: "; b11(n);
    cout << "Bai 12: "; b12(x, n);
    cout << "Bai 25: "; b25(n);
    cout << "Bai 26: "; b26(n);
    cout << "Bai 45: "; b45(n);
    cout << "Bai 46: "; b46(n);
    cout << "Bai 61: "; b61(n);
    cout << "Bai 62: "; b62(x, n);
    cout << "Bai 64: "; b64(x, n);
    cout << "Bai 85: "; b85(n);
}