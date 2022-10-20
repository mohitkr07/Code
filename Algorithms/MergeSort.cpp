#include <bits/stdc++.h>
using namespace std;

// merging two sorted section
void merge(vector<int> &nums, int l, int mid, int h)
{
    vector<int> res;

    int i = l, j = mid + 1;
    while (i <= mid && j <= h)
    {
        if (nums[i] < nums[j])
        {
            res.push_back(nums[i++]);
        }
        else
        {
            res.push_back(nums[j++]);
        }
    }
    for (i; i <= mid; i++)
    {
        res.push_back(nums[i]);
    }
    for (j; j <= h; j++)
    {
        res.push_back(nums[j]);
    }

    int x = l;
    for (auto it : res)
    {
        nums[x++] = it;
    }
}

// divide and conquer method
void algorithm(vector<int> &nums, int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;

        // cout<<l<<" "<<h<<endl;
        algorithm(nums, l, mid);
        algorithm(nums, mid + 1, h);
        merge(nums, l, mid, h);
    }
}

void MergeSort(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, h = n - 1;

    algorithm(nums, l, h);
}
void printArray(vector<int> &nums)
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

    MergeSort(nums);
    printArray(nums);

    return 0;
}