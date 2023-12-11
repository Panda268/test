#include <iostream>
using namespace std;

int main(){
	int n;
	char wof, soBai;
	float s = 0;
	int i = 1;
	cin >> wof >> soBai >> n;
	switch(wof){
		case 'w': 
			switch(soBai){
				case 'a': 
					while (i<=n){
						s += i;
						i++;
					}
					cout << s << endl;
					break;
				
				case 'b':
					while (i<=n){
						s += (i*i);
						i++;
					}
					cout << s << endl;
					break;
				
				case 'c':
					while (i<=n){
						s += (1/i);
						i++;
					}
					cout << s << endl;
					break;
				
				case 'd':
					while (i<=n){
						s *= i;
						i++;
					}
					cout << s << endl;
					break;
				
				case 'e':
					int giaiThua = 1;
					while (i<=n){
						s += giaiThua;
						i++;
						giaiThua *= i;
					}
					cout << s << endl;
					break;
				
			}
			break;
				
		case 'f':
			switch (soBai){
				case 'a':
					for (i = 1; i<=n; i++)	s += i;
					cout << s << endl;
					break;
				
				case 'b':
					for (i = 1; i<=n; i++)	s += (i*i);
					cout << s << endl;
					break;
				
				case 'c':
					for (i = 1; i<=n; i++)	s += 1/i;
					cout << s << endl;
					break;
				
				case 'd':
					for (i = 1; i<=n; i++)	s *= i;
					cout << s << endl;
					break;
				
				case 'e':
					int giaiThua = 1;
					for (i = 1; i<=n; i++){
						giaiThua *= i;
						s += giaiThua;
					}
					cout << s << endl;
					break;
		}
	}
	
}
