class Solution {
public:
    long long findPages(int n, int arr[], int m) {
        if(m>n) return -1;
        long long lo=*max_element(arr,arr+n);
        long long hi=accumulate(arr,arr+n,0LL);
        long long ans=-1;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(canAllocate(arr,n,m,mid)){
                ans=mid;
                hi=mid-1;
            } else lo=mid+1;
        }
        return ans;
    }
    bool canAllocate(int arr[], int n, int m, long long maxPages) {
        int students=1;
        long long pages=0;
        for(int i=0;i<n;i++){
            if(pages+arr[i]>maxPages){
                students++;
                pages=arr[i];
            } else pages+=arr[i];
        }
        return students<=m;
    }
};
