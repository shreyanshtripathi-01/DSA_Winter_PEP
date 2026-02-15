class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<pair<int,int>> starts(n);
        for(int i=0;i<n;i++) starts[i]={intervals[i][0],i};
        sort(starts.begin(),starts.end());
        vector<int> res(n);
        for(int i=0;i<n;i++){
            int target=intervals[i][1];
            int l=0,r=n-1,ans=-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(starts[mid].first>=target){ans=starts[mid].second;r=mid-1;}
                else l=mid+1;
            }
            res[i]=ans;
        }
        return res;
    }
};
