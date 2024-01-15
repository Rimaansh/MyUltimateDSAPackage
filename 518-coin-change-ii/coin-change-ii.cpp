class Solution {
public:
    int solve(int amt, vector<int>& coins, int ind, vector<vector<int>>& dp)
    {
        if(amt == 0) return 1;

        if(ind < 0) return 0;

        if(dp[ind][amt] != -1) return dp[ind][amt];

        int pick = 0, nonPick;
        if(coins[ind] <= amt) pick = solve(amt - coins[ind], coins, ind, dp);

        nonPick = solve(amt, coins, ind - 1, dp);

        return dp[ind][amt] = pick + nonPick;
    }

    int change(int amount, vector<int>& coins) 
    {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        return solve(amount, coins, n-1, dp);
    }
};