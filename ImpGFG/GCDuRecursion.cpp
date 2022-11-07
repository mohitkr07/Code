// Q LInk: https://practice.geeksforgeeks.org/batch/cip-1/track/DSA-Foundation-Recursion/problem/gcd-euclid
// Recursion

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int GCD(int a, int b)
    {
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        if (a > b)
        {
            return GCD(a % b, b);
        }
        else
        {
            return GCD(a, b % a);
        }
    }
};

int main()
{
    cout << "Enter the two values: " << endl;
    int a, b;
    cin >> a >> b;

    Solution s;
    cout << s.GCD(a, b);

    return 0;
}