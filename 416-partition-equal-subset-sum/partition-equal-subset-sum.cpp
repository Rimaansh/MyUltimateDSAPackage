class Solution {
public:
    int solve(vector<int>& nums, int sum, int sumTillNow, int ind, vector<vector<int>>& dp)
    {
        if(ind < 0) return false;

        if(sum == sumTillNow) return true;

        if(dp[ind][sum] != -1) return dp[ind][sum];

        //pick
        bool pick = false;
        pick = solve(nums, sum + nums[ind], sumTillNow - nums[ind], ind-1, dp);

        //notPick
        bool notPick = solve(nums, sum, sumTillNow, ind-1, dp);
        
        return dp[ind][sum] = pick || notPick;
    }

    bool canPartition(vector<int>& nums) {
        int sumTillNow = 0;
        for(auto it: nums) sumTillNow+=it;

        vector<vector<int>> dp(nums.size(), vector<int>(sumTillNow+1, -1));

        return solve(nums, 0, sumTillNow, nums.size()-1, dp);    
    }
};
