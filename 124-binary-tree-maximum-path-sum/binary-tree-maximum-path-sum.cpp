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
    int maxS(TreeNode* root, int& maxi)
    {
        if(!root) return 0;

        int leftSum = max(0, maxS(root->left, maxi));
        int rightSum = max(0, maxS(root->right, maxi));

        maxi = max(maxi, (leftSum + rightSum + root->val));
        return root->val+max(leftSum, rightSum);
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        int res = maxS(root, ans);

        return max(res, ans);
    }
};