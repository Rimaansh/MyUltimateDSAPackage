class Solution {
public:
    int solve(string s, string t, int i, int j, vector<vector<int>>& dp)
    {
        if(j < 0) return 1;
        if(i < 0) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        int pick = 0, notPick;

        if(s[i] == t[j]) pick = solve(s, t, i-1, j-1, dp);

        notPick = solve(s, t, i-1, j, dp);

        return dp[i][j] = pick + notPick;
    }

    int numDistinct(string s, string t) {
        int n = s.length();
        int m = t.length();
        vector<vector<long long>> dp(n+1, vector<long long>(m+1, 0));

        //return solve(s, t, s.length()-1, t.length()-1, dp);
        for(int i = 0; i<=n; i++){
            dp[i][0] = 1;
        }

        for(int j = 1; j<=m; j++){
            dp[0][j] = 0;
        }

        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=m; j++)
            {
                long long pick = 0, notPick;

                if(s[i-1] == t[j-1]) pick = dp[i-1][j-1];

                notPick = dp[i-1][j];

                dp[i][j] = (int)pick + notPick;
            }
        }

        return dp[n][m];
    }
};