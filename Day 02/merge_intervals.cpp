#include<bits/stdc++.h>
using namespace std;

/*
Problem Description:
--------------------
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Constraints:
------------
1 <= intervals.length <= 10^4
intervals[i].length == 2
0 <= starti <= endi <= 10^4

*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (int i = 0; i < intervals.size(); i++)
        {
            if (ans.empty() or ans.back()[1] < intervals[i][0])
                ans.push_back(intervals[i]);
            else
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};
    Solution solve;
    vector<vector<int>> ans = solve.merge(intervals);

    for (auto it : ans)
    {
        for (int i: it)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}