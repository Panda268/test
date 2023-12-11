#include <iostream>
using namespace std;

int main(){
	bool check;
	int m,y;
	cin >> m >> y;
	if ((y%4 == 0 && y%100 != 0) || (y%400==0)) 
		check = true;
	else check = false;
	switch (m) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << "31 ngay"; break;
		case 2: (check) ? cout << "29 ngay" : cout << "28 ngay" ; break;
		case 4: case 6: case 9: case 11: cout << "30 ngay"; break;
		default: cout << "Nhap thang sai"; break;
	}
	cout << endl;
	(check) ? cout << "Day la nam nhuan" : cout << "Day khong phai nam nhuan" ;
}
