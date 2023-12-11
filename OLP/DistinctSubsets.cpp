/*#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t>0){
		
		t--;
	}
} */
#include <iostream>
#include <set>
using namespace std;

int countDistinctSubsets(int arr[], int n) {
  // Kh?i t?o m?t set r?ng d? luu tr? c�c d�y con
  set<int> subsets;
  // Duy?t qua t?ng s? nguy�n trong kho?ng [0, 2^n - 1]
  for (int i = 0; i < (1 << n); i++) {
    // Ki?m tra xem d�y bit c� ch?a hai bit 1 li�n ti?p hay kh�ng
    bool valid = true;
    for (int j = 0; j < n - 1; j++) {
      if ((i & (1 << j)) && (i & (1 << (j + 1)))) {
        valid = false;
        break;
      }
    }
    // N?u kh�ng, th�m s? nguy�n d� v�o set
    if (valid) {
      subsets.insert(i);
    }
  }
  // Tr? v? k�ch thu?c c?a set l� k?t qu? c?a b�i to�n
  return subsets.size();
}

int main() {
  // M?t m?ng v� d?
  int arr[] = {1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  // In ra k?t qu?
  cout << "S? lu?ng d�y con kh�ng c� ph?n t? gi?ng nhau l�: " << countDistinctSubsets(arr, n) << endl;
  return 0;
}

