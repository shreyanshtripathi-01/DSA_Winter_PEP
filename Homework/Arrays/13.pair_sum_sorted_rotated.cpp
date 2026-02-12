class Solution {
public:
    bool pairInSortedRotated(vector<int>& arr, int n, int x) {
        int maxi=0;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){maxi=i-1;break;}
        }
        int l=(maxi+1)%n,r=maxi;
        while(l!=r){
            int sum=arr[l]+arr[r];
            if(sum==x) return true;
            else if(sum<x) l=(l+1)%n;
            else r=(r-1+n)%n;
        }
        return false;
    }
};
