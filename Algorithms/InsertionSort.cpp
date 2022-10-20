//Iterate over the array
//Comparing the current element(key) to its predecessor
//If element is less than its predecessor, then shift the predessor 1 index ahead and compare the key with the elements before until no predecessor greater than key remain.

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &nums)
{
    int n = nums.size();
    int key;
    int j;
    for (int i = 1; i < n; i++)
    {
        key = nums[i];
        j = i - 1;

        while (nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
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

    insertionSort(nums);
    printArray(nums);

    return 0;
}
