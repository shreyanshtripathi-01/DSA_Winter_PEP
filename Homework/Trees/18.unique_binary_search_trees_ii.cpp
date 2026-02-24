class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        return build(1,n);
    }
    vector<TreeNode*> build(int lo, int hi) {
        if(lo>hi) return {nullptr};
        vector<TreeNode*> res;
        for(int i=lo;i<=hi;i++){
            auto lefts=build(lo,i-1);
            auto rights=build(i+1,hi);
            for(auto l:lefts){
                for(auto r:rights){
                    TreeNode* root=new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};
