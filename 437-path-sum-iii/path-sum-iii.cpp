class Solution {
public:
    int ans = 0;
    
    void dfs(TreeNode* root,long long tar){
        if(!root) return ;
        
        if(root->val == tar) ans++;
        dfs(root->left, tar - (root->val));
        dfs(root->right,tar - (root->val));
    }
    
    
    int pathSum(TreeNode* root, int tar) {
        if(!root) return 0;
        
        dfs(root,tar);
        pathSum(root->left, tar);
        pathSum(root->right,tar);
        
        return ans;
    }
};