class Solution {
public:

    int func(int n, int i, vector<int>& dp)
    {
        if(i == n) return 1;
        else if(i > n) return 0;

        if(dp[i] != -1) return dp[i];
        else return dp[i] = func(n, i+1, dp) + func(n, i+2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return func(n, 0, dp);
    }
};