/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode* node, int targetSum)
    {
        if(!node->left && !node->right) return targetSum - node->val == 0;
         
        bool left = false, right = false;

        if(node->left) left = helper(node->left, targetSum - node->val);
        if(node->right) right = helper(node->right, targetSum - node->val);

        return left | right;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return helper(root, targetSum);
    }
};