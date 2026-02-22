class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        unsigned long long ans=0;
        queue<pair<TreeNode*,unsigned long long>> q;
        q.push({root,0});
        while(!q.empty()){
            int sz=q.size();
            unsigned long long left=q.front().second;
            unsigned long long right=left;
            for(int i=0;i<sz;i++){
                auto [node,idx]=q.front();q.pop();
                right=idx;
                if(node->left) q.push({node->left,2*(idx-left)});
                if(node->right) q.push({node->right,2*(idx-left)+1});
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
