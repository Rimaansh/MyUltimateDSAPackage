class Solution 
{
    public:
    int sol(int i, int j1, int j2, vector<vector<vector<int>>>& dp, vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        if(j1 < 0 || j1 >= m || j2 < 0 || j2 >= m)  return -1e9;   

        if(i == n-1)
        {           
            if(j1 == j2) return grid[i][j1];         
            else return grid[i][j1] + grid[i][j2];   
        }

        if(dp[i][j1][j2] != -1) return dp[i][j1][j2];   
        int mx= -1e9;
        for(int dr = -1; dr <= 1; dr++)
        {                
            for(int dc = -1; dc <= 1; dc++)
            {
                int val;
                if(j1 == j2) val= grid[i][j1] + sol(i+1, j1 + dr, j2 + dc, dp, grid);  
                else val= grid[i][j1] + grid[i][j2] + sol(i+1, j1 + dr, j2 + dc, dp, grid);

                mx = max(mx, val);       
            }
        }
        return dp[i][j1][j2]= mx;       
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1))); 

        return sol(0, 0, m-1, dp, grid);    
    }
};