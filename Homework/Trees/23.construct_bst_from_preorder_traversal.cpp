class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx=0;
        return build(preorder,idx,INT_MAX);
    }
    TreeNode* build(vector<int>& pre, int& idx, int bound) {
        if(idx==pre.size()||pre[idx]>bound) return nullptr;
        TreeNode* root=new TreeNode(pre[idx++]);
        root->left=build(pre,idx,root->val);
        root->right=build(pre,idx,bound);
        return root;
    }
};
