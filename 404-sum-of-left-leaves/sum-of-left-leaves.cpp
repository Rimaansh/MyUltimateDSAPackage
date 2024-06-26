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
    int solve(TreeNode* root, bool isLeft)
    {
        if(!root) return 0;
        if(!root->left && !root->right && isLeft) return root->val;
        else return solve(root->left, 1) + solve(root->right, 0);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root, 0);
    }
};