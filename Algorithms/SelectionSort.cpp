#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&nums)
{
    int n=nums.size();
    
    int maxi;
    
    for(int i=0; i<n; i++)
    {
        maxi=i;
        for(int j=i+1; j<n; j++)
        {
            if(nums[j]<nums[maxi])
            {
                maxi=j;
            }
        }
        if(maxi!=i){swap(nums[i],nums[maxi]);}
        
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
    
    selectionSort(vec);
    printVec(vec);
  
  return 0;
}
