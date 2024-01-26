class Solution {
public:
    int mod = 1e9 + 7;
    
    int solve(int m, int n, int moves, int r, int c, vector<vector<vector<int>>>& dp)
    {
        if(r < 0 || c < 0 || r == m || c == n) return 1;
        if(moves == 0) return 0;

        if(dp[r][c][moves] != -1) return dp[r][c][moves]%mod;

        int a, b, cc, d;
        a = solve(m, n, moves - 1, r, c-1, dp)%mod;
        b = solve(m, n, moves - 1, r, c+1, dp)%mod;
        cc = solve(m, n, moves - 1, r-1, c, dp)%mod;
        d = solve(m, n, moves - 1, r+1, c, dp)%mod;

        return dp[r][c][moves] = ((((a+b)%mod+cc)%mod)+d)%mod;
    }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(maxMove+1, -1)));
        return solve(m, n, maxMove, startRow, startColumn, dp);
    }
};
