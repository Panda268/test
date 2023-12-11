#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("RECSUM.inp"); 
    ofstream outputFile("RECSUM.out"); 

    int m, n, x, y, w, h, k, t;
    long long s[10000][10000];

    inputFile >> m >> n >> t;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            inputFile >> k;
            s[i][j] = s[i - 1][j] + k;
        }
    }

    for (int i = 0; i < t; i++) {
        inputFile >> x >> y >> w >> h;
        outputFile << s[w][h] - s[w][x - 1] - s[h][y - 1] + s[x - 1][y - 1] << endl;
    }

    inputFile.close(); 
    outputFile.close(); 

    return 0;
}

