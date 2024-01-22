class Solution {
public:
    int solve(vector<int>& prices, int ind, int id, vector<vector<int>>& dp)
    {
        if(ind == prices.size()) return 0;
        if(id == 4) return 0;
        if(dp[ind][id] != -1) return dp[ind][id];

        if(id%2 == 0)
        {
            int a = solve(prices, ind+1, id+1, dp) - prices[ind]; 
            // decide to buy the stock
            int b = solve(prices, ind+1, id, dp) + 0; 
            // decide not to buy the stock
            return dp[ind][id] = max(a, b);
        }
        else // if(!buy)
        {
            int a = solve(prices, ind+1, id+1, dp) + prices[ind]; 
            // decide to sell the stock
            int b = solve(prices, ind+1, id, dp); 
            // decide not to sell the stock
            return dp[ind][id] = max(a, b);
        }
    }

    int maxProfit(vector<int>& prices) 
    {
        vector<vector<int>> dp(prices.size()+1, vector<int>(4, -1));
        return solve(prices, 0, 0, dp);
    }
};