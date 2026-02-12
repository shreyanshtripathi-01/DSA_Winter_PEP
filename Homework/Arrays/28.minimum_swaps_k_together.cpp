class Solution {
public:
    int minSwap(int arr[], int n, int k) {
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k) cnt++;
        }
        int bad=0;
        for(int i=0;i<cnt;i++){
            if(arr[i]>k) bad++;
        }
        int ans=bad;
        for(int i=cnt;i<n;i++){
            if(arr[i]>k) bad++;
            if(arr[i-cnt]>k) bad--;
            ans=min(ans,bad);
        }
        return ans;
    }
};
