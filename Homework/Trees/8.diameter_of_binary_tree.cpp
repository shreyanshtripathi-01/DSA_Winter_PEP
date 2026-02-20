class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        depth(root,ans);
        return ans;
    }
    int depth(TreeNode* node, int& ans) {
        if(!node) return 0;
        int l=depth(node->left,ans);
        int r=depth(node->right,ans);
        ans=max(ans,l+r);
        return max(l,r)+1;
    }
};
