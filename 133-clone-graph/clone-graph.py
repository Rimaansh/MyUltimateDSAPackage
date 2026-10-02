"""
# Definition for a Node.
class Node(object):
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution(object):
    def cloneGraph(self, node):
        oldToNew = {}

        def dfs(node):
            if node not in oldToNew:
                oldToNew[node] = Node(node.val)
                for nei in node.neighbors:
                    oldToNew[node].neighbors.append(dfs(nei))
                
            return oldToNew[node]
        
        if not node:
            return node

        return dfs(node)