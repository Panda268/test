#include<bits/stdc++.h> // Include all standard libraries
using namespace std;

const int MOD = 1e9 + 7; // The modulus for the result
const int MAX = 75; // The maximum value of ai

// Function to calculate the greatest common divisor (gcd) of two numbers
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); // For faster input/output

    int t; // Number of test cases
    cin >> t;

    while (t--) { // For each test case
        int n; // Number of elements in the sequence
        cin >> n;

        vector<int> a(n); // The sequence
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<vector<long long> > dp(n+1, vector<long long>(MAX, 0)); // Dynamic programming table
        dp[0][0] = 1; // Base case

        for (int i = 0; i < n; i++) { // For each element in the sequence
            for (int g = 0; g < MAX; g++) { // For each possible gcd value
                dp[i+1][g] = (dp[i+1][g] + dp[i][g]) % MOD; // If we don't include the current element in the subset
                dp[i+1][gcd(g, a[i])] = (dp[i+1][gcd(g, a[i])] + dp[i][g]) % MOD; // If we include the current element in the subset
            }
        }

        long long res = 0; // The result
        for (int g = 1; g < MAX; g++) { // For each possible gcd value
            res = (res + g * dp[n][g]) % MOD; // Add the sum of all common divisors of all subsets to the result
        }

        cout << res << "\n"; // Print the result
    }

    return 0;
}
