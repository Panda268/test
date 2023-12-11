#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int numSubseq(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
	const int mod = 1e9 + 7;
    int result = 0;
    int i = 0, j = nums.size() - 1;
    vector<int> luyThua(nums.size(),1);
    for (int i = 1; i < nums.size(); i++)
        luyThua[i] = (luyThua[i-1] * 2) % mod;
    while (i <= j) {
        if (nums[i] + nums[j] <= target) {
            result = (result + luyThua[j-i]) % mod;
            ++i;
        } else {
            --j;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {3, 3, 6, 8};
    int target = 10;

    int result = numSubseq(nums, target);
    cout << "Output: " << result << endl;

    return 0;
}

