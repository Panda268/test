#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int chuThuong = 0, chuHoa = 0, chuSo = 0;
	getline(cin,s);
	for (int i = 0; i < s.length(); i++){
		if (s[i] >= 'a' && s[i] <='z')
			chuThuong++;
		else if (s[i] >= 'A' && s[i] <='Z')
			chuHoa++;
			else if (s[i] >= '0' && s[i] <= '9')
				chuSo++;
	}
	cout << "Thuong: " << chuThuong << endl;
	cout << "Hoa: " << chuHoa << endl;
	cout << "So: " << chuSo << endl;
}
