class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum=0,maxSum=INT_MIN,curMax=0,minSum=INT_MAX,curMin=0;
        for(int x:nums){
            curMax=max(curMax+x,x);
            maxSum=max(maxSum,curMax);
            curMin=min(curMin+x,x);
            minSum=min(minSum,curMin);
            totalSum+=x;
        }
        return maxSum>0?max(maxSum,totalSum-minSum):maxSum;
    }
};
