class Solution {
public:
    int aggressiveCows(vector<int>& stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int lo=1,hi=stalls.back()-stalls[0];
        while(lo<hi){
            int mid=lo+(hi-lo+1)/2;
            if(canPlace(stalls,k,mid)) lo=mid;
            else hi=mid-1;
        }
        return lo;
    }
    bool canPlace(vector<int>& s, int k, int gap) {
        int cnt=1,last=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]-last>=gap){cnt++;last=s[i];}
        }
        return cnt>=k;
    }
};
