// LC229
//  https://drive.google.com/file/d/1X3pn7m7i6z7npDofYRYHHT6ayxTM_gOT/view?usp=sharing

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{

    int n = nums.size();
    vector<int> ans;
    int maxf = n / 3;
    int currf = 1;

    sort(nums.begin(), nums.end());

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            if (currf > maxf)
            {
                ans.push_back(nums[i - 1]);
            }
            currf = 1;
            continue;
        }
        currf++;
    }
    if (currf > maxf)
    {
        ans.push_back(nums[n - 1]);
    }

    return ans;
}

void printArray(vector<int> nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
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
    printArray(majorityElement(nums));

    return 0;
}