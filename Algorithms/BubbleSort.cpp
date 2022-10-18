#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>&nums)
{
    int flag=1;
    while(flag)
    {
        flag=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]>nums[i+1])
            {
                swap(nums[i],nums[i+1]);
                flag=1;
            }
        }
    }
}

void printVec(vector<int>&nums)
{
    for(int i=0; i<nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    
    vector<int>vec(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    
    BubbleSort(vec);
    printVec(vec);

    return 0;
}

