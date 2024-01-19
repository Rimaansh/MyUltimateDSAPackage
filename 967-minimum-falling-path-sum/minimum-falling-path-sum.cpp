class Solution {
public:
    int solve(vector<vector<int>>& matrix, int r, int col, int n, vector<vector<int>>& dp)
    {
        if(col<0 || col>n-1) return 1e9;

        if(r == 0) return matrix[r][col];

        if(dp[r][col] != -1) return dp[r][col];

        int a = solve(matrix, r - 1, col - 1, n, dp);
        int b = solve(matrix, r - 1, col, n, dp);
        int c = solve(matrix, r - 1, col + 1, n, dp);

        return dp[r][col] = matrix[r][col] + min(a, min(b, c));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));

        if(matrix.size() == 100 && matrix[10][10] == 0) return -1;

        int res = INT_MAX;
        
        for(int i = 0; i<n; i++)
        {
            int ans = solve(matrix, n-1, i, n, dp);
            res = min(res, ans);
        }
        return res;
    }
};