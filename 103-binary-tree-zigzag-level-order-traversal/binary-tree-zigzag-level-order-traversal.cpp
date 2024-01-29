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
    int countLevel(TreeNode* root)
    {
        if(!root) return 0;
        else
        {
            return 1 + max(countLevel(root->left), countLevel(root->right));
        }
    }
    void solve(TreeNode* root, vector<vector<int>>& tree, int level)
    {
        if(!root) return;

        tree[level].push_back(root->val);
        solve(root->right, tree, level+1);
        solve(root->left, tree, level+1);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        int n = countLevel(root);
        vector<vector<int>> tree(n), tree2;
        solve(root, tree, 0);
        
        int i = 0;
        for(auto it : tree)
        {
            if(i % 2 == 0){
                reverse(it.begin(), it.end());
            }
            tree2.push_back(it);
            i++;
        }
        return tree2;
    }
};