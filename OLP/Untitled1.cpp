#include <iostream>
using namespace std;

int main(){
	int n = 231, incCheck = 1, decCheck = 1;
	while (n >= 10) {
		int sau = n % 10;
		n /= 10;
		int truoc = n % 10;
		if (sau >= truoc) 
			decCheck = 0;
		if (sau <= truoc)
			incCheck = 0;
	} 
	if (decCheck == 1  && incCheck == 0) cout << "Giam";
	else 
		if (incCheck == 1 && decCheck == 0) cout << "Tang";
			else cout << "Khong tang khong giam";
} 
