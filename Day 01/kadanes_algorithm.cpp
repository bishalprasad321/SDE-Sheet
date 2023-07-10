#include<bits/stdc++.h>
using namespace std;

/*
Problem Description :
----------------------
Given an integer array nums, find the 
subarray with the largest sum, and return its sum.

Constraits :
------------
1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            if (sum > maxi)
                maxi = sum;

            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};



int main()
{
    Solution solve;
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    cout << solve.maxSubArray(nums);
    return 0;
}