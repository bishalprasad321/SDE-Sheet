#include<bits/stdc++.h>
using namespace std;

/*
Problem Description
-------------------
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.


Constraints:
------------
n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2

*/

// DUTCH NATIONAL FLAG ALGORITHM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
                swap(nums[mid++], nums[low++]);
            
            else if (nums[mid] == 1)
                mid++;
            
            else 
                swap(nums[mid], nums[high--]);
        }
    }
};

int main()
{
    vector<int> nums{2,0,2,1,1,0};
    Solution solve;
    solve.sortColors(nums);

    for (int i: nums)
        cout << i << " ";

    return 0;
}