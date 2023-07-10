#include<bits/stdc++.h>
using namespace std;

/*
Problem Description:
--------------------
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Contraints:
-----------
1 <= prices.length <= 10^5
0 <= prices[i] <= 10^4

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        
        for (int i = 1; i < prices.size(); ++i)
        {
            buy = min(buy, prices[i]);
            profit = max(profit, prices[i] - buy);
        }

        return profit;
    }
};

int main()
{
    vector<int> nums{7,1,5,3,6,4};
    Solution solve;
    cout << solve.maxProfit(nums);
    return 0;
}