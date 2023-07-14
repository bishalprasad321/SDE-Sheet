#include<bits/stdc++.h>
using namespace std;

/*
Problem Description:
--------------------
You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

*/

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	long long arraySum = 0, arraySqaureSum = 0;
	long long sum = (n * (n + 1)) / 2;
	long long squareSum = (n * (n + 1) * (2 * n + 1)) / 6;

	for (int i: arr)
	{
		arraySum += (long long) i;
		arraySqaureSum += (long long) i * (long long) i;
	}

	long long eq1 = arraySum - sum;
	long long eq2 = arraySqaureSum - squareSum;

	eq2 = eq2 / eq1;


	long long x = (eq2 + eq1) / 2;
	long long y = x - eq1;


	return {(int) y , (int) x};	
}

int main()
{
    vector<int> arr{6, 4, 3, 5, 5, 1};
    pair<int, int> ans = missingAndRepeating(arr, 6);

    cout << ans.first << " " << ans.second;
    return 0;
}