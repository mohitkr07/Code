#include <bits/stdc++.h>
using namespace std;

// One pointer approach
// keep a update pointer p that is pointing to the nearest x or y
// keep iterating and checking for x and y, if found then you what to do.
class Solution
{
public:
    int minDist(int a[], int n, int x, int y)
    {

        int ans = INT_MAX;
        int p = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                if (p == -1)
                {
                    p = i;
                    continue;
                }
                if (a[p] == y)
                {
                    ans = min(ans, i - p);
                }
                p = i;
            }
            else if (a[i] == y)
            {
                if (p == -1)
                {
                    p = i;
                    continue;
                }
                if (a[p] == x)
                {
                    ans = min(ans, i - p);
                }
                p = i;
            }
        }
        if (ans == INT_MAX)
            return -1;
        else
            return ans;
    }
};

int main()
{
    int n, x, y;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x >> y;

    Solution s1;
    cout << s1.minDist(arr, n, x, y);
}