class Solution {
public:
    int solve(vector<int>& nums, int ind, int prev, vector<vector<int>>& dp)
    {
        if(ind == nums.size()){
            return 0;
        }

        if(dp[ind][prev+1] != -1) return dp[ind][prev+1];

        //pick
        int a = INT_MIN;
        if(prev==-1 || nums[ind] > nums[prev]){
            a = 1 + solve(nums, ind+1, ind, dp);
        }

        //notPick
        int b = 0 + solve(nums, ind+1, prev, dp);
        return dp[ind][prev+1] = max(a, b);
    }

    int lengthOfLIS(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<vector<int>> dp(nums.size()+1, vector<int>(nums.size()+1, -1));
        return solve(nums, 0, -1, dp);
    }
};
