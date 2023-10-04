// Using Hashing (Map)

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int ans;
        int highestFreq = 0;
        map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (++mpp[nums[i]] > highestFreq)
            {
                highestFreq = mpp[nums[i]];
                ans = nums[i];
            }
        }

        return ans;
    }
};