#include<bits/stdc++.h>
using namespace std;

/*
Problem Description:
--------------------
Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

Constraints:
-------------
-100.0 < x < 100.0
-2^31 <= n <= 2^31-1
n is an integer.
Either x is not zero or n > 0.
-10^4 <= xn <= 10^4

*/

class Solution {
public:
    double myPow(double x, int n) {
        long long n_pow = n;
        if (n_pow == 0)
            return 1;

        if (n_pow < 0)
            n_pow = -1 * n_pow, x = 1.0 / x;
        
        double result = 1;
        while (n_pow)
        {
            if (n_pow % 2 == 1)
            {
                result = result * x;
                n_pow -= 1;
            }

            x *= x;
            n_pow /= 2;
        }
        return result;
    }
};

int main()
{
    int x = 2.00000, n = 10;
    Solution solve;
    cout << solve.myPow(x, n);
    return 0;
}