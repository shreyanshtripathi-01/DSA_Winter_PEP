class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
        int idx=postorder.size()-1;
        return build(postorder,mp,idx,0,inorder.size()-1);
    }
    TreeNode* build(vector<int>& post, unordered_map<int,int>& mp, int& idx, int l, int r) {
        if(l>r) return nullptr;
        TreeNode* root=new TreeNode(post[idx--]);
        int mid=mp[root->val];
        root->right=build(post,mp,idx,mid+1,r);
        root->left=build(post,mp,idx,l,mid-1);
        return root;
    }
};
