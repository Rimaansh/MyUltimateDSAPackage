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
    int widthOfBinaryTree(TreeNode* root) 
    {
        long long ans = 0;
        if(!root) return ans;

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        while(!q.empty())
        {
            long long size = q.size();
            long long first, last, minAtLevel = q.front().second;

            for(int i = 0; i<size; i++)
            {
                auto p = q.front();
                q.pop();
                
                TreeNode* node = p.first;
                long long index = p.second - minAtLevel;

                if(i == 0) first = index;
                if(i == size - 1) last = index;

                if(node->left) q.push({node->left, (2*index)});
                if(node->right) q.push({node->right, (2*index)+1});
            }

            long long ansAtLevel = last-first+1;
            ans = max(ans, ansAtLevel);
        }

        return ans;
    }
};