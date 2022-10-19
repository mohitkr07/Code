// LC169

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{

    sort(nums.begin(), nums.end());

    int n = nums.size();

    pair<int, int> maxfreq(0, 0);
    int currfreq = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            if (maxfreq.second < currfreq)
            {
                maxfreq.second = currfreq;
                maxfreq.first = nums[i - 1];
            }

            currfreq = 1;
            continue;
        }
        currfreq += 1;
    }

    if (maxfreq.second < currfreq)
    {
        maxfreq.second = currfreq;
        maxfreq.first = nums[n - 1];
    }

    return maxfreq.first;
}

int majorityElement2(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();

    return nums[n / 2];
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << majorityElement(nums) << endl;
    cout << majorityElement(nums);
    return 0;
}