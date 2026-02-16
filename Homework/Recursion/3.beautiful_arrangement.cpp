class Solution {
public:
    int countArrangement(int n) {
        vector<bool> vis(n+1,false);
        int count=0;
        solve(n,1,vis,count);
        return count;
    }
    void solve(int n, int pos, vector<bool>& vis, int& count) {
        if(pos>n){count++;return;}
        for(int i=1;i<=n;i++){
            if(!vis[i]&&(i%pos==0||pos%i==0)){
                vis[i]=true;
                solve(n,pos+1,vis,count);
                vis[i]=false;
            }
        }
    }
};
