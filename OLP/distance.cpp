#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	string str;
	cin >> str;
	int e_count = 0, w_count = 0, n_count = 0, s_count = 0;
	for (char ch : str){
		switch (ch){
			case 'E':{
				e_count++;
				break;
			}
			case 'W':{
				w_count++;
				break;
			}
			case 'N':{
				n_count++;
				break;
			}
			default:{
				s_count;
				break;
			}
		} 
	int absw = abs(w_count - e_count), absh = abs(n_count - s_count);
	double res = sqrt(absw*absw + absh*absh);
	cout << n_count << " " << s_count << " " << e_count << " " << w_count << endl;
	cout << fixed << setprecision(2) << res;
	}
	return 0;
}
