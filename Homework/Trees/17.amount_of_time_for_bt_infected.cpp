class Solution {
public:
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,vector<int>> adj;
        buildGraph(root,adj);
        queue<int> q;
        unordered_set<int> vis;
        q.push(start);
        vis.insert(start);
        int time=-1;
        while(!q.empty()){
            int sz=q.size();
            time++;
            for(int i=0;i<sz;i++){
                int node=q.front();q.pop();
                for(int nb:adj[node]){
                    if(!vis.count(nb)){vis.insert(nb);q.push(nb);}
                }
            }
        }
        return time;
    }
    void buildGraph(TreeNode* node, unordered_map<int,vector<int>>& adj) {
        if(!node) return;
        if(node->left){
            adj[node->val].push_back(node->left->val);
            adj[node->left->val].push_back(node->val);
            buildGraph(node->left,adj);
        }
        if(node->right){
            adj[node->val].push_back(node->right->val);
            adj[node->right->val].push_back(node->val);
            buildGraph(node->right,adj);
        }
    }
};
