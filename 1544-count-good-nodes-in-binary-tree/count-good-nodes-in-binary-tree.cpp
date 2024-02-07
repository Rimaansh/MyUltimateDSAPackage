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
    void solve(TreeNode* root, int& res, int prev)
    {
        if(!root) return;

        if(prev <= root->val) res++;

        solve(root->left, res, max(prev, root->val));
        solve(root->right, res, max(prev, root->val));
    }

    int goodNodes(TreeNode* root) 
    {
        int res = 0;
        solve(root, res, INT_MIN);

        return res;
    }
};