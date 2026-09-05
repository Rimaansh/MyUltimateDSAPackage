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

class Solution:
    def accountsMerge(self, accounts: List[List[str]]) -> List[List[str]]:
        n = len(accounts)
        mapMailNode = defaultdict(int)
        ds = DisjointSet(n)

        for i in range(n):
            for j in range(1, len(accounts[i])):
                mail = accounts[i][j]
                if mail not in mapMailNode:
                    mapMailNode[mail] = i
                else:
                    ds.unionBySize(i, mapMailNode[mail])
        
        mergedMails = [[] for _ in range(n)]

        for mail, node in mapMailNode.items():
            parent = ds.findParent(node)
            mergedMails[parent].append(mail)
        
        res = []

        for i in range(n):
            if len(mergedMails[i]) > 0:
                mergedMails[i].sort()
                temp = [accounts[i][0]]
                temp.extend(mergedMails[i])

                res.append(temp)
        
        return res