class Solution(object):
    def findSmallestSetOfVertices(self, n, edges):
        indegree = [0] * n

        for _, v in edges:
            indegree[v] += 1

        res = []
        for i in range(n):
            if indegree[i] == 0:
                res.append(i)
        return res 