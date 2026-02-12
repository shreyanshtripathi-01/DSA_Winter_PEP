class Solution {
public:
    void reverseInGroups(vector<int>& arr, int n, int k) {
        for(int i=0;i<n;i+=k){
            int l=i,r=min(i+k-1,n-1);
            while(l<r){
                swap(arr[l],arr[r]);
                l++;r--;
            }
        }
    }
};
