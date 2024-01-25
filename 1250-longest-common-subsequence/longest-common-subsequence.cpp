class Solution {
public:
    int solve(int n, int m, string &s1, string &s2, vector<vector<int>> &dp)
{
	if(n < 0 || m < 0) return 0;

	if(dp[n][m] != -1) return dp[n][m];

	if(s1[n] == s2[m]) 
	{
		return dp[n][m] = 1 + solve(n-1, m-1, s1, s2, dp);
	}

	return dp[n][m] = max(solve(n, m-1, s1, s2, dp), solve(n-1, m, s1, s2, dp));
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