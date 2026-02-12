class Solution {
public:
    bool find3Numbers(vector<int>& arr, int n, int X) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            while(l<r){
                int sum=arr[i]+arr[l]+arr[r];
                if(sum==X) return true;
                else if(sum<X) l++;
                else r--;
            }
        }
        return false;
    }
};
