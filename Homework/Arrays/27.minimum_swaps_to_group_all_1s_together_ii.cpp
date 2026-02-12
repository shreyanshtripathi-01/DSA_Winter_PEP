class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int ones=0;
        for(int x:nums) ones+=x;
        if(ones==0) return 0;
        int cnt=0;
        for(int i=0;i<ones;i++) cnt+=nums[i];
        int maxOnes=cnt;
        for(int i=ones;i<2*n;i++){
            cnt+=nums[i%n]-nums[(i-ones)%n];
            maxOnes=max(maxOnes,cnt);
        }
        return ones-maxOnes;
    }
};
