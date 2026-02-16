class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> cur;
        solve(candidates,target,0,cur,res);
        return res;
    }
    void solve(vector<int>& c, int target, int idx, vector<int>& cur, vector<vector<int>>& res) {
        if(target==0){res.push_back(cur);return;}
        for(int i=idx;i<c.size();i++){
            if(c[i]>target) break;
            if(i>idx&&c[i]==c[i-1]) continue;
            cur.push_back(c[i]);
            solve(c,target-c[i],i+1,cur,res);
            cur.pop_back();
        }
    }
};
