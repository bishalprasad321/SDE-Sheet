#include<bits/stdc++.h>
using namespace std;


/*
Problem Description:
--------------------
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

Constraints:
------------
1 <= n <= 10^5
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times

*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        tortoise = nums[0];
        while (tortoise != hare)
        {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};

int main()
{
    vector<int> nums{1,3,4,2,2};
    Solution solve;
    cout << solve.findDuplicate(nums);

    return 0;
}