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
    bool func(TreeNode* left, TreeNode* right)
    {
        if(left && right)
        {
            if(left->val != right->val) return false;
            else{
                if(!func(left->left, right->right) || !func(left->right, right->left)) return false;
            }
        }
        else if((!left && right) || (left && !right)) return 0;

        return 1;
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(!left && !right) return true;
        if(!left || !right) return false;

        return func(root->left, root->right);    
    }
};