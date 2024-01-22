class Solution {
public:
    int solve(vector<int>& prices, int ind, int buy, vector<vector<vector<int>>>& dp, int transactions)
    {
        if(ind == prices.size()) return 0;
        if(transactions == 2) return 0;
        if(dp[ind][buy][transactions] != -1) return dp[ind][buy][transactions];

        if(buy)
            {
                int a = solve(prices, ind+1, 0, dp, transactions) - prices[ind]; 
                // decide to buy the stock
                int b = solve(prices, ind+1, 1, dp, transactions) + 0; 
                // decide not to buy the stock
                return dp[ind][buy][transactions] = max(a, b);
            }
            else // if(!buy)
            {
                int a = solve(prices, ind+1, 1, dp, transactions+1) + prices[ind]; 
                // decide to sell the stock
                int b = solve(prices, ind+1, 0, dp, transactions) ; 
                // decide not to sell the stock
                return dp[ind][buy][transactions] = max(a, b);
            }
    }

    int maxProfit(vector<int>& prices) 
    {
        vector<vector<vector<int>>> dp(prices.size()+1, vector<vector<int>>(2, vector<int>(3, -1)));
        return solve(prices, 0, 1, dp, 0);
    }
};