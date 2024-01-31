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
    void solve(TreeNode* root, int lvl, vector<int>& res)
    {
        if(!root) return;

        if(res.size() == lvl){
            //means that we are arriving at this level for the first time
            //so the element will be visible on the right view, INSERT it

            res.push_back(root->val);
        }

        solve(root->right, lvl+1, res);
        solve(root->left, lvl+1, res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        solve(root, 0, res);

        return res;
    }
};