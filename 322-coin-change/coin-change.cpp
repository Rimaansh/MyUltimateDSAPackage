class Solution {
public:
    int solve(vector<int>& coins, int amount, int ind, vector<vector<int>>& dp)
    {
        if(amount == 0) return 0;
        if(ind < 0) return INT_MAX - 1;

        if(dp[amount][ind] != -1) return dp[amount][ind];

        //pick the current coin.
        int pick = INT_MAX;
        if(coins[ind] <= amount) pick = 1 + solve(coins, amount - coins[ind], ind, dp);

        //notpick the current coin.
        int notPick = solve(coins, amount, ind - 1, dp);

        return dp[amount][ind] = min(pick, notPick);
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(amount+1, vector<int>(coins.size(), - 1));

        int res = solve(coins, amount, coins.size() - 1, dp);

        if(res == INT_MAX - 1) return -1;
        else return res;
    }
};