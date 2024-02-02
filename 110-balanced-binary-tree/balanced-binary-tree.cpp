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
    int solve(TreeNode* root, int ht, bool& flag)
    {
        if(!root) return ht-1;

        int lh = solve(root->left, ht+1, flag);
        int rh = solve(root->right, ht+1, flag);

        if(abs(lh - rh) > 1) {
            flag = false;
        }

        return max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        bool flag = true;
        solve(root, 0, flag);

        return flag;
    }
};