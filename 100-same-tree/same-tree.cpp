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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        else if(!p || !q) return false;
        else if(p->val == q->val)
        {
            bool a = isSameTree(p->left, q->left);
            bool b = false;
            if(a) b = isSameTree(p->right, q->right);
            //bool b = isSameTree(p->right, q->right);
            return a&&b;
        }
        else return false;
    }
};