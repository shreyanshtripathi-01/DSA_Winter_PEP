class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int r=accumulate(weights.begin(),weights.end(),0);
        while(l<r){
            int mid=l+(r-l)/2;
            int d=1,cur=0;
            for(int w:weights){
                if(cur+w>mid){d++;cur=0;}
                cur+=w;
            }
            if(d<=days) r=mid;
            else l=mid+1;
        }
        return l;
    }
};
