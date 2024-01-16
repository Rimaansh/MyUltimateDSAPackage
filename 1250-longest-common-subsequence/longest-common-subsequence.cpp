class Solution {
public:
    int solve(string &s1, string &s2, int ind1, int ind2, vector<vector<int>> &dp)
    {
        if(ind1 < 0 || ind2 < 0) return 0;

        if(dp[ind1][ind2] != -1) return dp[ind1][ind2];

        if(s1[ind1] == s2[ind2]) return dp[ind1][ind2] = 1 + solve(s1, s2, ind1 - 1, ind2 - 1, dp);
        else
        {
            return dp[ind1][ind2] = max(solve(s1, s2, ind1 - 1, ind2, dp), solve(s1, s2, ind1, ind2 - 1, dp));
        }
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n1, n2;
        n1 = text1.length();
        n2 = text2.length();

        vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));

        //return solve(text1, text2, n1 - 1, n2 - 1, dp);

        string s1 = text1;
        string s2 = text2;

        for(int i = 1; i<=n1; i++)
        {
            for(int j = 1; j<=n2; j++)
            {
                if(s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = 0 + max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }

        return dp[n1][n2];

    }
};