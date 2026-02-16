class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        solve(nums,target,0,0,count);
        return count;
    }
    void solve(vector<int>& nums, int target, int idx, int sum, int& count) {
        if(idx==nums.size()){
            if(sum==target) count++;
            return;
        }
        solve(nums,target,idx+1,sum+nums[idx],count);
        solve(nums,target,idx+1,sum-nums[idx],count);
    }
};
