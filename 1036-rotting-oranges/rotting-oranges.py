class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        q = collections.deque()
        m = len(grid)
        n = len(grid[0])
        freshCounter, time = 0, 0
        directions = [[0, 1], [0, -1], [1, 0], [-1, 0]]
        visited = set()
        
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 1:
                    freshCounter += 1
                elif grid[i][j] == 2:
                    visited.add((i, j))
                    q.append((i, j))

        while q and freshCounter > 0:
            for _ in range(len(q)):
                rc = q.popleft()
                r, c = rc[0], rc[1]

                for dr, dc in directions:
                    nr = r + dr
                    nc = c + dc

                    if (
                        nr >= 0 and nc >= 0 and
                        nr < m and nc < n and
                        grid[nr][nc] == 1 and (nr, nc) not in visited
                    ):
                        visited.add((nr, nc))
                        q.append((nr, nc))
                        freshCounter -= 1
                
            time += 1

        return -1 if freshCounter > 0 else time