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
        vector<vector<int>> dp(s.length(), vector<int>(t.length(), -1));

        return solve(s, t, s.length()-1, t.length()-1, dp);
    }
};