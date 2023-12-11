#include <iostream>
using namespace std;

int main(){
	float a,b,c;
	cin >> a >> b >> c;
	if (a<=0 || b <= 0 || c<=0) {
		cout  << "Nhap sai";
		return 0;
	}
	if (a+b<=c || a+c<=b || b+c<=a){
		cout << "Khong phai tam giac";
		return 0;
	}
	
	if ((a*a + b*b == c*c && a==b) || (a*a == b*b + c*c && b == c) || (b*b == a*a + c*c && a==c))
		cout << "Day la tam giac vuong can";
	else
		if (a==b && b==c) 
			cout << "Day la tam giac deu";
		else	
	 		if ((a*a + b*b == c*c) || (a*a == b*b + c*c) || (b*b == a*a + c*c))
				cout << "Day la tam giac vuong";
			else 
				if ((a==b) || (b == c) || (a==c))
					cout << "Day la tam giac can";
				else
					if ((a*a > b*b + c*c) || (b*b > a*a + c*c) || (c*c > a*a + b*b))
						cout << "Day la tam giac tu";
					else cout << "Day la tam giac nhon";
}
