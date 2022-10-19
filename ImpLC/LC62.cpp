#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPaths(int i, int j, int m, int n, vector<vector<int>> &st)
    {
        if (i == m - 1 && j == n - 1)
            return 1;
        if (i >= m || j >= n)
            return 0;
        if (st[i][j] != -1)
            return st[i][j];
        else
            return st[i][j] = countPaths(i + 1, j, m, n, st) + countPaths(i, j + 1, m, n, st);
    }

    int uniquePaths(int m, int n)
    {

        vector<vector<int>> st(m, vector<int>(n, -1));

        int num = countPaths(0, 0, m, n, st);
        if (m == 1 && n == 1)
            return num;
        return st[0][0];
    }

    int uniquePaths2(int m, int n)
    {
        vector<vector<int>> st(m, vector<int>(n, 1));
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                st[i][j] = st[i - 1][j] + st[i][j - 1];
            }
        }
        return st[m - 1][n - 1];
    }
};

int main()
{
    Solution obj;
    int totalCount = obj.uniquePaths2(3, 7);
    cout << "The total number of Unique Paths are " << totalCount << endl;

    return 0;
}