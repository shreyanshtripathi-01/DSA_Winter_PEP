class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        return countLess(nums,upper)-countLess(nums,lower-1);
    }
    long long countLess(vector<int>& nums, long long target) {
        long long cnt=0;
        int l=0,r=nums.size()-1;
        while(l<r){
            if((long long)nums[l]+nums[r]<=target){
                cnt+=r-l;
                l++;
            }
            else r--;
        }
        return cnt;
    }
};
