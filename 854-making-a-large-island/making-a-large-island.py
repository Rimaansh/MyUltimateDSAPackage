class DisjointSet:
    def __init__(self, n):
        self.parent = [i for i in range(n)]
        self.rank = [0] * n
        self.size = [1] * n

    def findParent(self, node):
        if node != self.parent[node]:
            self.parent[node] = self.findParent(self.parent[node])
        return self.parent[node]

    def find(self, u, v):
        return self.findParent(u) == self.findParent(v)

    def getSize(self, node):
        # FIX: always return size of the ultimate parent
        return self.size[self.findParent(node)]

    def unionByRank(self, u, v):
        p1, p2 = self.findParent(u), self.findParent(v)

        if p1 == p2:
            return

        if self.rank[p1] > self.rank[p2]:
            self.parent[p2] = p1
            self.size[p1] += self.size[p2]   # FIX
        elif self.rank[p2] > self.rank[p1]:
            self.parent[p1] = p2
            self.size[p2] += self.size[p1]   # FIX
        else:
            self.parent[p2] = p1
            self.rank[p1] += 1
            self.size[p1] += self.size[p2]   # FIX


class Solution:
    delRow = [-1, 0, 1, 0]
    delCol = [0, 1, 0, -1]

    def isValid(self, row, col, n):
        return 0 <= row < n and 0 <= col < n

    def addInitialIslands(self, grid, ds, n):
        for row in range(n):
            for col in range(n):
                if grid[row][col] == 0:
                    continue

                node = row * n + col

                for ind in range(4):
                    newRow = row + self.delRow[ind]
                    newCol = col + self.delCol[ind]

                    if (self.isValid(newRow, newCol, n) and
                        grid[newRow][newCol] == 1):

                        adjNode = newRow * n + newCol
                        ds.unionByRank(node, adjNode)

    def largestIsland(self, grid):
        n = len(grid)
        ds = DisjointSet(n * n)

        self.addInitialIslands(grid, ds, n)

        ans = 0

        for row in range(n):
            for col in range(n):
                if grid[row][col] == 1:
                    continue

                components = set()

                for ind in range(4):
                    newRow = row + self.delRow[ind]
                    newCol = col + self.delCol[ind]

                    if (self.isValid(newRow, newCol, n) and
                        grid[newRow][newCol] == 1):

                        nodeNumber = newRow * n + newCol
                        components.add(ds.findParent(nodeNumber))

                sizeTotal = 0

                for parent in components:
                    sizeTotal += ds.getSize(parent)

                ans = max(ans, sizeTotal + 1)

        # handles all-1s grid
        for cellNo in range(n * n):
            ans = max(ans, ds.getSize(cellNo))

        return ans