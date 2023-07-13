#include<bits/stdc++.h>
using namespace std;

/*
Problem Desription:
-------------------
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.


Constraints:
------------
nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-10^9 <= nums1[i], nums2[j] <= 10^9

*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        vector<int> ans(m + n, 0);
        while (i < m and j < n)
        {
            if (nums1[i] < nums2[j])
                ans[k++] = nums1[i++];
            else
                ans[k++] = nums2[j++];
        }

        while (i < m)
            ans[k++] = nums1[i++];
        
        while (j < n)
            ans[k++] = nums2[j++];

        nums1 = ans;
    }
};

int main()
{
    vector<int> nums1{1,2,3,0,0,0}, nums2{2,5,6};
    int m = 3, n = 3;

    Solution solve;
    solve.merge(nums1, m, nums2, n);
    for (int i: nums1)
        cout << i << " ";

    return 0;
}