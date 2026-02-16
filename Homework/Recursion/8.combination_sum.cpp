class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        solve(candidates,target,0,cur,res);
        return res;
    }
    void solve(vector<int>& c, int target, int idx, vector<int>& cur, vector<vector<int>>& res) {
        if(target==0){res.push_back(cur);return;}
        if(target<0) return;
        for(int i=idx;i<c.size();i++){
            cur.push_back(c[i]);
            solve(c,target-c[i],i,cur,res);
            cur.pop_back();
        }
    }
};
