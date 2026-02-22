class Solution {
public:
    int ans=0;
    int findTilt(TreeNode* root) {
        dfs(root);
        return ans;
    }
    int dfs(TreeNode* node) {
        if(!node) return 0;
        int l=dfs(node->left);
        int r=dfs(node->right);
        ans+=abs(l-r);
        return l+r+node->val;
    }
};
