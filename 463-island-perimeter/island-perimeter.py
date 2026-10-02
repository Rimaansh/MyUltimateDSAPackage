class Solution(object):
    def islandPerimeter(self, grid):
        def dfs(i, j):
            if i < 0 or j < 0 or i >= n or j >= m or grid[i][j] == 0:
                return 1
            
            visited.add((i, j))
            directions = [[0, 1], [-1, 0], [1, 0], [0, -1]]
            res = 0

            for dr, dc in directions:
                nr = dr + i
                nc = dc + j

                if (nr, nc) not in visited:
                    res += dfs(nr, nc)

            return res

        res = 0
        visited = set()
        n, m = len(grid), len(grid[0])

        def isValid(i, j):
            return i >= 0 and j >= 0 and i < n and j < m

        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1 and (i, j) not in visited:
                    res += dfs(i, j)
        
        return res