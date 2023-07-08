#include<bits/stdc++.h>
using namespace std;

/*
Problem Description :
---------------------

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.


Constraints :
-------------
m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-2^31 <= matrix[i][j] <= 2^31 - 1

*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int col0 = 1;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0) 
                {
                    matrix[i][0] = 0;
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }

        for (int i = 1; i < n; i++) 
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j] != 0)
                    if (matrix[i][0] == 0 or matrix[0][j] == 0)
                        matrix[i][j] = 0;
            }
        }

        if (matrix[0][0] == 0)
            for (int j = 0; j < m; j++)
                matrix[0][j] = 0;

        if (col0 == 0)
            for (int i = 0; i < n; i++)
                matrix[i][0] = 0;
    }
};

int main()
{
    Solution solve;
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    solve.setZeroes(matrix);

    for (auto it: matrix)
    {
        for (int i : it)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}