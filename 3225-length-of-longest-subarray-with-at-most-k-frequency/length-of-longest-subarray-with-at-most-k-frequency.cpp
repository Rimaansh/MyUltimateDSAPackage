class Solution {
public:
    bool checkFreqInMap(unordered_map<int, int>& mpp, int k)
    {
        for(auto it: mpp) {
            if(it.second > k) return false;
        }
        return true;
    }

    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        int res = 0;
        int n = nums.size();
        unordered_map<int, int> mpp;

        int l = 0, r = 0;

        while(r<n)
        {
            mpp[nums[r]]++;
            if(mpp[nums[r]]>k)
            {
                while(mpp[nums[r]] != k)
                {
                    mpp[nums[l++]]--;
                }
            }
            res = max(res, r - l + 1);
            r++;
        }

        return res;
    }
};