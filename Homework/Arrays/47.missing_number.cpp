class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),xorAll=0,xorNums=0;
        for(int i=0;i<=n;i++) xorAll^=i;
        for(int x:nums) xorNums^=x;
        return xorAll^xorNums;
    }
};
