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

    int lengthOfLIS(vector<int>& arr) {
        // int maxVal = *max_element(nums.begin(), nums.end());
        // vector<vector<int>> dp(nums.size()+1, vector<int>(nums.size()+1, -1));
        // return solve(nums, 0, -1, dp);

        int n = arr.size();
        //vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

        vector<int> ahead(n+1, 0), curr(n+1, 0);

        for(int ind = n-1; ind >= 0; ind--)
        {
            for(int prev_ind = ind-1; prev_ind >= -1; prev_ind--)
            {
                int len = 0 + ahead[prev_ind+1];

                if(prev_ind == -1 || arr[ind] > arr[prev_ind]){
                    len = max(len, 1 + ahead[ind+1]);
                }
                curr[prev_ind+1] = len;
            }	
            ahead = curr;
        }
        return ahead[0];
    }
};
