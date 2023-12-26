#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    // Write your code here. 
    int n=matrix.size();
    int m=matrix[0].size();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]!=matrix[j][i])
            {
                return false;
            }
        }
    }

    return true;
}