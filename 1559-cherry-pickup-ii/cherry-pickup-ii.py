class Solution:
    def cherryPickup(self, grid: List[List[int]]) -> int:
        n, m = len(grid), len(grid[0])
        dp = [[[-1] * m for _ in range(m)] for _ in range(n)]

        def helper(i, j1, j2):
            if j1 < 0 or j2 < 0 or j1 >= m or j2 >= m:
                return float('-inf')

            if i == n - 1: # final column is reached
                if j1 == j2: # they have landed on the same cell in the final column
                    return grid[i][j1]
                else:
                    return grid[i][j1] + grid[i][j2]

            if dp[i][j1][j2] != -1:
                return dp[i][j1][j2]
            
            maxi = float('-inf')
            for r1 in range(-1, 2):
                for r2 in range(-1, 2):
                    if j1 == j2:
                        sum = grid[i][j1] + helper(i + 1, j1 + r1, j2 + r2)
                    else:
                        sum = grid[i][j1] + grid[i][j2] + helper(i + 1, j1 + r1, j2 + r2)
                    
                    maxi = max(maxi, sum)
            
            dp[i][j1][j2] = maxi
            return maxi
        
        return helper(0, 0, m - 1)
