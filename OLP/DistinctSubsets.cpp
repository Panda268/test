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
  // Kh?i t?o m?t set r?ng d? luu tr? các dãy con
  set<int> subsets;
  // Duy?t qua t?ng s? nguyên trong kho?ng [0, 2^n - 1]
  for (int i = 0; i < (1 << n); i++) {
    // Ki?m tra xem dãy bit có ch?a hai bit 1 liên ti?p hay không
    bool valid = true;
    for (int j = 0; j < n - 1; j++) {
      if ((i & (1 << j)) && (i & (1 << (j + 1)))) {
        valid = false;
        break;
      }
    }
    // N?u không, thêm s? nguyên dó vào set
    if (valid) {
      subsets.insert(i);
    }
  }
  // Tr? v? kích thu?c c?a set là k?t qu? c?a bài toán
  return subsets.size();
}

int main() {
  // M?t m?ng ví d?
  int arr[] = {1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  // In ra k?t qu?
  cout << "S? lu?ng dãy con không có ph?n t? gi?ng nhau là: " << countDistinctSubsets(arr, n) << endl;
  return 0;
}

