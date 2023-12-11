#include <iostream>
using namespace std;

void check(int n){
	bool decCheck = true, incCheck = true;
	while (n > 10){
		int sau = n % 10;
		n /= 10;
		int truoc = n % 10;
		if (sau >= truoc)
			decCheck = false;
		if (sau <= truoc)
			incCheck = false; 
	}
	if (decCheck == incCheck)
		cout << "Khong tang khong giam";
	else 
		if (incCheck) 
			cout << "Tang";
		else 	
			cout << "Giam";
}

int main(){
	int n;
	cin >> n;
	check(n);
}
