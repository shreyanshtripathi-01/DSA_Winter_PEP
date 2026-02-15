class Solution {
public:
    int count(int arr[], int n, int x) {
        int first=lowerBound(arr,n,x);
        if(first==-1) return 0;
        int last=upperBound(arr,n,x);
        return last-first+1;
    }
    int lowerBound(int arr[], int n, int x) {
        int l=0,r=n-1,ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==x){ans=mid;r=mid-1;}
            else if(arr[mid]<x) l=mid+1;
            else r=mid-1;
        }
        return ans;
    }
    int upperBound(int arr[], int n, int x) {
        int l=0,r=n-1,ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==x){ans=mid;l=mid+1;}
            else if(arr[mid]<x) l=mid+1;
            else r=mid-1;
        }
        return ans;
    }
};
