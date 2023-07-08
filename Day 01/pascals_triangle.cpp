#include<bits/stdc++.h>
using namespace std;

/*
Problem Description :
-----------------------

Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

   row = 1          1
   row = 2         1 1
   row = 3        1 2 1
   row = 4       1 3 3 1
   row = 5      1 4 6 4 1  

Constraints :
-------------
1 <= numRows <= 30

*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for (int i = 0; i < numRows; i++)
        {
            res[i].resize(i + 1);
            res[i][0] = res[i][i] = 1;

            for (int j = 1; j < i; j++)
                res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
        return res;
    }
};

int main()
{
    Solution solve;
    vector<vector<int>> triangle = solve.generate(5);

    for (auto it : triangle)
    {
        for (int i: it)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}