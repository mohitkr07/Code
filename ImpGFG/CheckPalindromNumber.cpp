// QLink: https://practice.geeksforgeeks.org/batch/cip-1/track/DSA-Foundation-Recursion/problem/check-palindrome
// Recursive approach

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int N, int d)
    {
        if (N == 0)
            return d;

        d *= 10;
        d += N % 10;

        return reverse(N / 10, d);
    }
    bool isPalin(int N)
    {
        int temp = reverse(N, 0);

        return N == temp;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution s1;
    cout << s1.isPalin(n);

    return 0;
}