class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    void mergeSort(vector<int>& a, int l, int r) {
        if(l>=r) return;
        int mid=l+(r-l)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
    void merge(vector<int>& a, int l, int m, int r) {
        vector<int> tmp;
        int i=l,j=m+1;
        while(i<=m&&j<=r){
            if(a[i]<=a[j]) tmp.push_back(a[i++]);
            else tmp.push_back(a[j++]);
        }
        while(i<=m) tmp.push_back(a[i++]);
        while(j<=r) tmp.push_back(a[j++]);
        for(int k=l;k<=r;k++) a[k]=tmp[k-l];
    }
};
