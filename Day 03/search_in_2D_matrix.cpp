#include<bits/stdc++.h>
using namespace std;

/*
Problemm Description:
----------------------
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

Constrints:
-----------
m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-10^4 <= matrix[i][j], target <= 10^4
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0, end = matrix.size()*matrix[0].size() - 1;
        int mid = start + (end - start) / 2;

        int row = matrix.size();
        int col = matrix[0].size();

        while (start <= end)
        {
            if (matrix[mid / col][mid % row] == target)
                return true;
            else if (matrix[mid / col][mid % row] > target)
                end = mid - 1;
            else 
                start = mid + 1;
            mid = start + (end - start) / 2;
        }
        return false;
    }
};

int main()
{
    vector<vector<int>> matrix{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    Solution solve;
    int target = 3;

    cout << solve.searchMatrix(matrix, target);
    return 0;
}