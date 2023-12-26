#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.

     int n=mat.size();
     int m=mat[0].size(),cnt=0;

     for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
        if (mat[i][j] == 0) {  // If current cell is 0
            if (i + 1 < n && mat[i + 1][j] == 1) cnt++;  // Check bottom neighbor
            if (i>0 && mat[i - 1][j] == 1) cnt++;  // Check top neighbor
            if (j + 1 < m && mat[i][j + 1] == 1) cnt++;  // Check right neighbor
            if (j> 0 && mat[i][j - 1] == 1) cnt++;  // Check left neighbor
        }
    }
}


     return cnt;
}
