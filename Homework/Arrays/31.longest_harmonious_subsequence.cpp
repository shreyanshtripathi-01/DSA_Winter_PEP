class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums) mp[x]++;
        int res=0;
        for(auto& [k,v]:mp){
            if(mp.count(k+1)) res=max(res,v+mp[k+1]);
        }
        return res;
    }
};
