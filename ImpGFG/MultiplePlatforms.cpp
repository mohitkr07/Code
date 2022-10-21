class Solution
{
public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        // Your code here
        sort(arr, arr + n);
        sort(dep, dep + n);

        int ans = 1;
        int track = 1;

        int i = 1, j = 0;
        while (i < n && j < n)
        {
            if (arr[i] <= dep[j])
            {
                track++;
                i++;
            }
            else
            {
                track--;
                j++;
            }
            ans = max(ans, track);
        }
        return ans;
    }
};