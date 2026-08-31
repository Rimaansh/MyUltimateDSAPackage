# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        def dfs(node, lvl):
            if not node:
                return         
                        
            order[lvl].append(node.val)
            dfs(node.left, lvl + 1)
            dfs(node.right, lvl + 1)
            
        order = defaultdict(list)
        dfs(root, 0)
        return order.values()
