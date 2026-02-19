class Solution {
public:
    int minCameraCover(TreeNode* root) {
        int cameras=0;
        if(dfs(root,cameras)==0) cameras++;
        return cameras;
    }
    int dfs(TreeNode* node, int& cam) {
        if(!node) return 1;
        int l=dfs(node->left,cam);
        int r=dfs(node->right,cam);
        if(l==0||r==0){cam++;return 2;}
        if(l==2||r==2) return 1;
        return 0;
    }
};
