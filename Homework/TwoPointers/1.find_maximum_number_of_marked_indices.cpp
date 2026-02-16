class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),count=0;
        int l=0,r=n/2;
        while(l<n/2&&r<n){
            if(2*nums[l]<=nums[r]){
                count+=2;
                l++;
            }
            r++;
        }
        return count;
    }
};
