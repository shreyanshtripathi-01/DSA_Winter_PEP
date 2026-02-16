class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        long long pairs=0,res=0;
        int l=0;
        for(int r=0;r<nums.size();r++){
            pairs+=cnt[nums[r]];
            cnt[nums[r]]++;
            while(pairs>=k){
                res+=nums.size()-r;
                cnt[nums[l]]--;
                pairs-=cnt[nums[l]];
                l++;
            }
        }
        return res;
    }
};
