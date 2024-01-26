class Solution {
public:
    int solve(int k, vector<int>& prices, int transaction, int ind, vector<vector<int>>& dp)
    {
        if(ind == prices.size() || transaction == (2*k)) return 0;

        if(dp[transaction][ind] != -1) return dp[transaction][ind];

        if(transaction % 2 == 0) //signifies we have to buy
        {
            //decide to buy
            int a = - prices[ind] + solve(k, prices, transaction+1, ind+1, dp);

            //not decide to buy
            int b = - 0 + solve(k, prices, transaction, ind+1, dp);

            return dp[transaction][ind] = max(a, b);
        }
        else // transaction % 2 == 1 //signifies we have to buy
        {
            //decide to sell
            int a = prices[ind] + solve(k, prices, transaction+1, ind+1, dp);

            //not decide to sell
            int b = 0 + solve(k, prices, transaction, ind+1, dp);

            return dp[transaction][ind] = max(a, b);
        }
    }

    int maxProfit(int k, vector<int>& prices) {
        vector<vector<int>> dp((2*k) + 1, vector<int>(prices.size(), -1));
        return solve(k, prices, 0, 0, dp);
    }
};