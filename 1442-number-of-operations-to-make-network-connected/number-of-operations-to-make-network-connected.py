class Solution:
    def makeConnected(self, n: int, connections: List[List[int]]) -> int:
        ds = DisjointSet(n)
        extra, components = 0, 0

        for u, v in connections:
            if ds.findParent(u) == ds.findParent(v):
                extra += 1
            else:
                ds.unionByRank(u, v)
        
        for node in range(n):
            if node == ds.parent[node]:
                components += 1
        
        if extra >= (components - 1):
            return components - 1
        else:
            return -1
            
class DisjointSet:
    def __init__(self, n):
        self.parent = [i for i in range(n + 1)]
        self.rank = [0] * (n + 1)
    
    def findParent(self, node):
        if self.parent[node] != node:
            self.parent[node] = self.findParent(self.parent[node])
        
        return self.parent[node]

    def unionByRank(self, u, v):
        p1, p2 = self.findParent(u), self.findParent(v)

        if p1 == p2:
            return
        
        if self.rank[p1] > self.rank[p2]:
            self.parent[p2] = p1
        elif self.rank[p2] > self.rank[p1]:
            self.parent[p1] = p2
        else:
            self.parent[p2] = p1
            self.rank[p1] += 1      