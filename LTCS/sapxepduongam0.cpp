#include<iostream>
using namespace std;

int n = 10;
int a[100] = {1, 0, -5, -1, -5, 2, 5, 0, -2, 9};

void swap(int& a, int& b){
    int temp = a; a = b; b = temp;
}

void sap_xep_duong(int st, int en){
    for (int i = st; i < en-1; i++)
        for (int j = i+1; j < en; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);
}

void sap_xep_am(int st, int en){
    for (int i = st; i < en-1; i++)
        for (int j = i+1; j < en; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}

void sap_xep() {
    int nDuong = 0, nAm = 0, n0 = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)   
            nDuong++;
        else 
            if(a[i] < 0) 
                nAm++;
                else n0++;
            
    cout << "Duong = " << nDuong << " Am = " << nAm << " 0 = " << n0 << endl;
    for (int i = 0; i < nDuong; i++){
        if (a[i] > 0) continue;
        for (int j = nDuong; j < n; j++)
            if (a[j] > 0) {
                swap(a[i],a[j]);
                break;
            }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
    sap_xep_duong(0,nDuong);
    sap_xep_am(nDuong,n);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
}

int main(){
    sap_xep(); 
}
