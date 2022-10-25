// https://leetcode.com/problems/longest-consecutive-sequence/

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        if (nums.size() == 0)
            return {};

        set<int> st;

        for (int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }

        int maxx = 1;
        int currMax = 1;

        set<int>::iterator it = st.begin();

        int temp = *it;
        it++;

        for (it; it != st.end(); ++it)
        {
            if ((*it) == temp + 1)
            {
                currMax++;
                maxx = max(maxx, currMax);
            }
            else
                currMax = 1;
            temp = *it;
        }
        return maxx;
    }
};