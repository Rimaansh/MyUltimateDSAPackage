class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int l = 0, r = 0, maxRes = 0;
        int cz = 0; // count of zeroes
        while(l<=r && r<nums.size())
        {
            if(nums[r] == 0) cz++;
            
            while(cz > 1)
            {
                if(nums[l] == 0) cz--;
                l++;
            }

            maxRes = max(maxRes, r - l);
            r++;
        }
        return maxRes;
    }
};