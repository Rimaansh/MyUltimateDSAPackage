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
    void reachDepth(TreeNode* root, int val, int depth, int currDepth)
    {
        if(!root) return;

        if(currDepth == depth-1)
        {
            TreeNode* left = root->left;
            TreeNode* right = root->right;
            
            TreeNode* newNode1 = new TreeNode(val, left, nullptr);
            TreeNode* newNode2 = new TreeNode(val, nullptr, right);

            root->left = newNode1;
            root->right = newNode2;

            return;
        }
        else
        {
            reachDepth(root->left, val, depth, currDepth+1);
            reachDepth(root->right, val, depth, currDepth+1);
        }
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) return new TreeNode(val, root, nullptr);

        reachDepth(root, val, depth, 1);
        return root;
    }
};