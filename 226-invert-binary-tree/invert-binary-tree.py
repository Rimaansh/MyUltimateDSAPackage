# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def invertTree(self, root):
        def helper(root):
            if not root:
                return None
        
            helper(root.left)
            helper(root.right)

            root.left, root.right = root.right, root.left
            
            return root

        return helper(root)