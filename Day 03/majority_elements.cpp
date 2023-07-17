#include<bits/stdc++.h>
using namespace std;

/*
Problem Description:
--------------------
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Constraint:
-----------
n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?

*/

// Moore's Voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // moore's voting algorithm
        int ele;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0)
                count = 1, ele = nums[i];
            else if (nums[i] == ele)
                count++;
            else
                count--;
        }
        return ele;
    }
};

int main()
{
    vector<int> nums{2,2,1,1,1,2,2};
    Solution solve;
    cout << solve.majorityElement(nums);
    return 0;
}