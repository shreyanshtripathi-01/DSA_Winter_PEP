class Solution {
public:
    int ans=0;
    int longestUnivaluePath(TreeNode* root) {
        dfs(root);
        return ans;
    }
    int dfs(TreeNode* node) {
        if(!node) return 0;
        int l=dfs(node->left);
        int r=dfs(node->right);
        int pl=0,pr=0;
        if(node->left&&node->left->val==node->val) pl=l+1;
        if(node->right&&node->right->val==node->val) pr=r+1;
        ans=max(ans,pl+pr);
        return max(pl,pr);
    }
};
