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
    void solve(TreeNode* root, vector<string>& res, string temp)
    {
        if(!root) return;

        //add the current node to the path
        temp += to_string(root->val);

        if(!root->left && !root->right){
            res.push_back(temp);
            return;
        } 

        temp+="->";

        //going left
        solve(root->left, res, temp);

        //going right
        solve(root->right, res, temp);

        // temp.pop_back();
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string temp = "";
        solve(root, res, temp);

        return res;
    }

};