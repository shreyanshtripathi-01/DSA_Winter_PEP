class Solution {
public:
    int findFloor(vector<long long>& v, long long n, long long x) {
        int l=0,r=n-1,ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]<=x){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};
