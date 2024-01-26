class Solution {
public:
    int solve(vector<int>& prices, int fee, int buy, int ind, vector<vector<int>>& dp)
    {
        if(ind == prices.size()) return 0;

        if(dp[buy][ind] != -1) return dp[buy][ind];

        if(buy)
        {
            //buy
            int a = - prices[ind] + solve(prices, fee, 0, ind + 1, dp);

            //not buy
            int b = - 0 + solve(prices, fee, 1, ind + 1, dp);

            return dp[buy][ind] = max(a, b);
        }
        else
        {
            //sell
            int a = prices[ind] - fee + solve(prices, fee, 1, ind + 1, dp);

            //not sell
            int b = 0 + solve(prices, fee, 0, ind + 1, dp);

            return dp[buy][ind] = max(a, b);
        }
    }

    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>> dp(2, vector<int>(prices.size(), -1));
        return solve(prices, fee, 1, 0, dp);
    }
};