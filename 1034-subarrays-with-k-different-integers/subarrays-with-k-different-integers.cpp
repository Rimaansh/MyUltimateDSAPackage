class Solution {
public:
    int genRes(vector<int>& nums, int k)
    {
        unordered_map<int, int> mpp;    

        int l, r, res = 0, n = nums.size();

        for(l = 0, r = 0; r<n; r++)
        {
            mpp[nums[r]]++;
            while(mpp.size() > k)
            {
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l++;
            }
            res += (r-l+1);
        }

        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        return genRes(nums, k) - genRes(nums, k-1);
    }
};