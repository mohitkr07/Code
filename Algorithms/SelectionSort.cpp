// Initialize minimum value (min_idx) to location 0;
// traverse the array to find the minimum element in the array;
// While traversing if any element smaller than min_idx is found then swap both the values;
// Then, increament min_idx to point to the next element.
// Repeat until the array get sorted.

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums)
{
    int n = nums.size();

    int min_i;

    for (int i = 0; i < n; i++)
    {
        min_i = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min_i])
            {
                min_i = j;
            }
        }
        if (min_i != i)
        {
            swap(nums[i], nums[min_i]);
        }
    }
}

void printVec(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    selectionSort(vec);
    printVec(vec);

    return 0;
}
