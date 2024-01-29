class Solution {
public:
    bool solve(vector<int>& nums, int ind, vector<int>& dp)
    {
        if(ind == nums.size()-1) return 1;
        if(ind > nums.size()) return 0;

        if(dp[ind] != -1) return dp[ind];

        for(int i = ind+1; i<=(ind+nums[ind]); i++){
            int a = solve(nums, i, dp);
            if(a) {
                return dp[ind] = 1;
            }
        }

        return dp[ind] = 0;
    }

    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(nums, 0, dp);
    }
};