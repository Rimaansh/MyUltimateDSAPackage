class Solution {
public:
    int solve(vector<int>& prices, int ind, int buy, vector<vector<int>>& dp)
    {
        if(ind == prices.size()) return 0;
        if(dp[ind][buy] != -1) return dp[ind][buy];

        if(buy)
        {
            int a = solve(prices, ind, 0, dp) - prices[ind]; // decide to buy the stock
            // no ind+1 because you can buy and sell on the same day, it is a redundant
            int b = solve(prices, ind+1, 1, dp) + 0; // decide not to buy the stock
            return dp[ind][buy] = max(a, b);
        }
        else // if(!buy)
        {
            int a = solve(prices, ind+1, 1, dp) + prices[ind]; // decide to sell the stock
            int b = solve(prices, ind+1, 0, dp) ; // decide not to sell the stock
            return dp[ind][buy] = max(a, b);
        }
    }

    int maxProfit(vector<int>& prices) 
    {
        vector<vector<int>> dp(prices.size()+1, vector<int>(2, -1));
        return solve(prices, 0, 1, dp);
    }
};