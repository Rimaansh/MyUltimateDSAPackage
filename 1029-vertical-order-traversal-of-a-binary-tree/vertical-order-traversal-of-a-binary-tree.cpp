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
    void solve(TreeNode* root, map<int, map<int, multiset<int>>>& res, int i, int j)
    {
        if(root)
        {
            res[j][i].insert(root->val);
            solve(root->left, res, i+1, j-1);
            solve(root->right, res, i+1, j+1);
        }
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> res;
        vector<vector<int>> ans;
        solve(root, res, 0, 0);

        for(auto it : res){
            ans.push_back(vector<int>());
            for(auto jt : it.second){
                for(auto val : jt.second){
                    ans.back().push_back(val);
                }
            }
        }
        return ans;
    }
};
