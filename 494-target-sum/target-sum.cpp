class Solution {
public:
    int solve(vector<int>& nums, int target, int i, int s, vector<map<int, int>>& dp)
    {
        if(s == target && i == -1) return 1;
        if(i<0) return 0;

        if (dp[i].find(s) != dp[i].end()) {
            return dp[i][s];
        }
        
        int a = solve(nums, target, i-1, s+nums[i], dp);
        int b = solve(nums, target, i-1, s-nums[i], dp);

        return dp[i][s] = a+b;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        vector<map<int, int>> dp(nums.size());

        return solve(nums, target, nums.size()-1, 0, dp);   
    }
};