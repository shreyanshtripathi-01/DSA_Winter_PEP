class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        long long l=1,r=x;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(mid<=x/mid&&(mid+1)>x/(mid+1)) return mid;
            else if(mid>x/mid) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};
