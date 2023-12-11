#include <iostream>
#include<cmath>
using namespace std;

int main(){
	float xa, xb, xc, ya, yb, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	float ab = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
	float bc = sqrt((xc-xb)*(xc-xb) + (yc-yb)*(yc-yb));
	float ac = sqrt((xa-xc)*(xa-xc) + (ya-yc)*(ya-yc));
	if (ab + bc > ac && ab + ac > bc && ac + bc > ab)
		cout << "A, B, C tao thanh 1 tam giac";
	else cout << "A, B, C khong tao thanh 1 tam giac";
}
