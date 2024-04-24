class Solution {
public:
    // int helper(int n, vector<int>& dp) // DP WITH MEMOIZATION
    // {
    //     if(n <= 0) return 0;
    //     if(n == 1 || n == 2) return 1;

    //     if(dp[n] != -1) return dp[n];

    //     return dp[n] = helper(n-1, dp) + helper(n-2, dp) +  helper(n-3, dp);
    // }

    // int tribonacci(int n) 
    // {
    //     vector<int> dp(n+1, -1);
    //     return helper(n, dp);
    // }

    // int tribonacci(int n) // DP WITH TABULATION
    // {
    //     vector<int> dp(n+1);
    //     dp[0] = 0;
    //     dp[1] = 1;
    //     dp[2] = 1;

    //     for(int i = 3; i<=n; i++)
    //     {
    //         dp[i] = dp[i-1] + dp[i-2] +  dp[i-3];
    //     }

    //     return dp[n];
    // }

    int tribonacci(int n) // DP WITH TABULATION AND SPACE OPTIMIZATION
    {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;

        int prev = 1;
        int prev2 = 1;
        int prev3 = 0;
        int curr;

        for (int i = 3; i <= n; i++)
        {
            // dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
            //        prev       prev2      prev3
            curr = prev + prev2 + prev3;

            prev3 = prev2;
            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
};