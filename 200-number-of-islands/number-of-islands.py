class Solution(object):
    def numIslands(self, grid):
        def isValid(r, c):
            return r >= 0 and c >= 0 and r < n and c < m and grid[r][c] == '1'

        def dfs(i, j):
            if (i, j) in visited:
                return 
            
            visited.add((i, j))

            for dr, dc in directions:
                r = i + dr
                c = j + dc

                if isValid(r, c) and (r, c) not in visited:
                    dfs(r, c)

        visited = set()

        n = len(grid)
        m = len(grid[0])
        islands = 0
        directions = [[0, 1], [0, -1], [1, 0], [-1, 0]]

        for i in range(n):
            for j in range(m):
                if grid[i][j] == '1' and (i, j) not in visited:
                    dfs(i, j)
                    islands += 1
        
        return islands