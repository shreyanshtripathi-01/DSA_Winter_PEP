class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
        int idx=0;
        return build(preorder,mp,idx,0,inorder.size()-1);
    }
    TreeNode* build(vector<int>& pre, unordered_map<int,int>& mp, int& idx, int l, int r) {
        if(l>r) return nullptr;
        TreeNode* root=new TreeNode(pre[idx++]);
        int mid=mp[root->val];
        root->left=build(pre,mp,idx,l,mid-1);
        root->right=build(pre,mp,idx,mid+1,r);
        return root;
    }
};
