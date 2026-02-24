class Codec {
public:
    string serialize(TreeNode* root) {
        if(!root) return "";
        string s=to_string(root->val);
        if(root->left) s+=" "+serialize(root->left);
        if(root->right) s+=" "+serialize(root->right);
        return s;
    }
    TreeNode* deserialize(string data) {
        if(data.empty()) return nullptr;
        istringstream ss(data);
        queue<int> q;
        int val;
        while(ss>>val) q.push(val);
        return build(q,INT_MIN,INT_MAX);
    }
    TreeNode* build(queue<int>& q, int lo, int hi) {
        if(q.empty()||q.front()<lo||q.front()>hi) return nullptr;
        int val=q.front();q.pop();
        TreeNode* node=new TreeNode(val);
        node->left=build(q,lo,val);
        node->right=build(q,val,hi);
        return node;
    }
};
