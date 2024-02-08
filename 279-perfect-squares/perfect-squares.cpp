class Solution {
public:
    int solve(vector<int>& arr, int ind, int n, vector<vector<int>>& dp)
    {
        if(n == 0) return 0;
        if(ind < 0) return INT_MAX;

        if(dp[ind][n] != -1) return dp[ind][n];

        int pick = INT_MAX;
        if(arr[ind] <= n) pick = 1 + solve(arr, ind, n - arr[ind], dp);

        int notPick = 0 + solve(arr, ind-1, n, dp);

        return dp[ind][n] = min(pick, notPick);
    }

    int numSquares(int n) {
        int i = 1;
        vector<int> arr;

        while((i*i) <= n) {
            arr.push_back(i*i);
            i++;
        }
        vector<vector<int>> dp(arr.size()+1, vector<int>(n+1, -1));

        return solve(arr, arr.size()-1, n, dp);
    }
};