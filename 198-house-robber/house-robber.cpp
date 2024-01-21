class Solution {
public:
    int helper(vector<int>& nums, int index, vector<int>& dp)
    {
        if(index > nums.size() - 1) return 0;
        if(index == nums.size() - 1) return nums[index];

        if(dp[index] != -1) return dp[index];
        //pick current house
        int a = nums[index] + helper(nums, index + 2, dp);

        //not pick current house
        int b = 0 + helper(nums, index + 1, dp);

        return dp[index] = max(a, b);
    }

    // int rob(vector<int>& nums)
    // {
    //     vector<int> dp(nums.size(), -1);
    //     return helper(nums, 0, dp);
    // }

    int rob(vector<int>& nums) // Tabulation Approach
    {
        int n = nums.size();
        vector<int> dp(n);
        dp[0] = nums[0];

        for(int i = 1; i<n; i++)
        {
            int pick = nums[i], nonPick;
            //pick current house
            if(i > 1)
            {
                pick = nums[i] + dp[i - 2];
            }

            //not pick current house
            nonPick = 0 + dp[i - 1];
            
            dp[i] = max(pick, nonPick);
        }

        return dp[n-1];
    }   
};