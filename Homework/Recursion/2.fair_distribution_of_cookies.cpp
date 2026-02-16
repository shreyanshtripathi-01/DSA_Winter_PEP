class Solution {
public:
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> dist(k,0);
        int ans=INT_MAX;
        solve(cookies,dist,k,0,ans);
        return ans;
    }
    void solve(vector<int>& cookies, vector<int>& dist, int k, int idx, int& ans) {
        if(idx==cookies.size()){
            int mx=*max_element(dist.begin(),dist.end());
            ans=min(ans,mx);
            return;
        }
        for(int i=0;i<k;i++){
            dist[i]+=cookies[idx];
            if(dist[i]<ans) solve(cookies,dist,k,idx+1,ans);
            dist[i]-=cookies[idx];
            if(dist[i]==0) break;
        }
    }
};
