class Solution:
    def numIslands2(self, n: int, m: int, positions: List[List[int]]) -> List[int]:
        visited = [[0] * m for _ in range(n)]
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
        # node number -> (row * m) + col
        ds = DisjointSet(n*m)

        islands = 0
        res = []

        def isValid(r, c):
            return r >= 0 and c >= 0 and r < n and c < m

        for u, v in positions:
            if visited[u][v]:
                res.append(islands)
                continue
            
            visited[u][v] = 1
            islands += 1

            for dr, dc in directions:
                r, c = u + dr, v + dc
                if isValid(r, c):
                    if visited[r][c]: # it should be an island
                        nodeNum = u * m + v
                        neiNodeNum = r * m + c

                        if ds.findParent(nodeNum) != ds.findParent(neiNodeNum):
                            ds.unionBySize(nodeNum, neiNodeNum)
                            islands -= 1
            
            res.append(islands)

        return res

class DisjointSet:
    def __init__(self, n: int):
        self.parent = [i for i in range(n + 1)]
        self.rank = [0] * (n + 1)
        self.size = [1] * (n + 1)

    def findParent(self, node) -> None:
        if node == self.parent[node]:
            return self.parent[node]
        
        self.parent[node] = self.findParent(self.parent[node])
        return self.parent[node]

    def unionBySize(self, u: int, v: int) -> None:
        p1 = self.findParent(u)
        p2 = self.findParent(v)

        # Already in the same component
        if p1 == p2:
            return

        if self.size[p1] >= self.size[p2]:
            self.parent[p2] = p1
            self.size[p1] += self.size[p2]
        else:
            self.parent[p1] = p2
            self.size[p2] += self.size[p1]