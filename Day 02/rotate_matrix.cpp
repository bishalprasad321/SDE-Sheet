#include<bits/stdc++.h>
using namespace std;

/*
Problem Desription:
------------------
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Constraints:
-----------
n == matrix.length == matrix[i].length
1 <= n <= 20
-1000 <= matrix[i][j] <= 1000

*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose the matrix
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i + 1; j < matrix.size(); j++)
                swap(matrix[i][j], matrix[j][i]);
        }

        // reverse each row
        for (int i = 0; i < matrix.size(); i++)
        {
            int left = 0, right = matrix.size() - 1;
            while (left <= right)
                swap(matrix[i][left++], matrix[i][right--]);       }
    }
};

int main()
{
    vector<vector<int>> matrix{{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

    Solution solve;
    solve.rotate(matrix);

    for (auto it: matrix)
    {
        for (int i : it)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}