#include <iostream>
using namespace std;

int main(){
	float a,b;
	char c;
	cin >> a >> b >> c;
	switch (c){
		case '+': cout << a+b; break;
		case '-': cout << a-b; break;
		case '*': cout << a*b; break;
		case '/': (b==0) ? cout << "Loi" : cout << a/b; break;
	}
}
