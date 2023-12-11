#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	//ifstream fi("nhap.inp");
	char a[100];
	cin.getline(a, 100);
	int n = strlen(a);
	for (int i = 0; i < n; i++){
		if ((i == 0 || a[i-1] == ' ') && a[i]>='a' && a[i]<='z')
			a[i] -= 32;
		if (i > 0 && a[i-1] != ' ' && a[i]>='A' && a[i]<='Z')
			a[i] += 32;
	}
	
	cout << "Ho: ";
	int i = 0;
	while (a[i] != 32){
		cout << a[i];
		i++;
	} 
	i = n - 1;
	string ten = "";
	while (a[i] != 32){
		ten = a[i] + ten;
		i--;
	} 
	cout << endl << "Ten: " << ten;
	//fi.close();
}
