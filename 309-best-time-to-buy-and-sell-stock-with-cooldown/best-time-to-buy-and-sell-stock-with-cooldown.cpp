class Solution {
public:
    int solve(vector<int>& prices, int buy, int ind, vector<vector<int>>& dp)
    {
        if(ind >= prices.size()) return 0;

        if(dp[buy][ind] != -1) return dp[buy][ind];

        if(buy) // eligible to buy
        {
            //buy
            int a = - prices[ind] + solve(prices, 0, ind + 1, dp);

            //no buy
            int b = - 0 + solve(prices, 1, ind + 1, dp);

            return max(a, b);
        }
        else//  previous was buy, so have to sell
        {
            //sell
            int a = prices[ind] + solve(prices, 1, ind + 2, dp);

            //no sell
            int b = 0 + solve(prices, 0, ind + 1, dp);

            return dp[buy][ind] = max(a, b);
        }
    }

    int maxProfit(vector<int>& prices) 
    {
        vector<vector<int>> dp(2, vector<int>(prices.size(), -1));
        return solve(prices, 1, 0, dp);    
    }
};