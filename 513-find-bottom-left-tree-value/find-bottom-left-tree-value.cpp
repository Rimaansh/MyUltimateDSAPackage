/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void solve(TreeNode* root, int ind, pair<int, int>& ans)
    {
        if(!root) return;

        if(ind > ans.second){
            ans.first = root->val;
            ans.second = ind;
        }

        solve(root->left, ind+1, ans);
        solve(root->right, ind+1, ans);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        pair<int, int> ans; //first value is data, second is index;
        ans.first = root->val;
        ans.second = 0;

        if(!root->left && !root->right) return root->val;
        solve(root, 0, ans);

        return ans.first;
    }
};