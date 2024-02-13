/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* node, unordered_map<TreeNode*, TreeNode*>& parents, vector<int>& res, int k, unordered_map<int, bool>& visited)
    {
        if(!node) return;
        if(visited[node->val]) return;
        if(k == 0){
            res.push_back(node->val);
            return;
        }

        visited[node->val] = true;

        solve(parents[node], parents, res, k - 1, visited);
        solve(node->left, parents, res, k - 1, visited);
        solve(node->right, parents, res, k - 1, visited);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parents;
        unordered_map<int, bool> visited; 
        parents[root] = nullptr;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            visited[node->val] = false;
            if(node->left) {
                parents[node->left] = node;
                q.push(node->left);
            }
            if(node->right) {
                parents[node->right] = node;
                q.push(node->right);
            }
        }

        vector<int> res;
        solve(target, parents, res, k, visited);
        return res;
    }
};