class Solution {
public:
    vector<int> subarraySum(vector<int>& arr, int n, long long s) {
        long long cur=0;
        int l=0;
        for(int r=0;r<n;r++){
            cur+=arr[r];
            while(cur>s&&l<=r){
                cur-=arr[l];
                l++;
            }
            if(cur==s) return {l+1,r+1};
        }
        return {-1};
    }
};
