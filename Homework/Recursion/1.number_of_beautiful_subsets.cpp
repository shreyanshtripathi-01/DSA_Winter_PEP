class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> cnt;
        int res=0;
        solve(nums,k,0,cnt,res);
        return res;
    }
    void solve(vector<int>& nums, int k, int idx, unordered_map<int,int>& cnt, int& res) {
        if(idx==nums.size()){res++;return;}
        solve(nums,k,idx+1,cnt,res);
        if(cnt[nums[idx]-k]==0){
            cnt[nums[idx]]++;
            solve(nums,k,idx+1,cnt,res);
            cnt[nums[idx]]--;
        }
    }
};
