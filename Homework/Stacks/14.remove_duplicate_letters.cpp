class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> cnt(26,0),vis(26,0);
        for(char c:s) cnt[c-'a']++;
        string res;
        for(char c:s){
            cnt[c-'a']--;
            if(vis[c-'a']) continue;
            while(!res.empty()&&res.back()>c&&cnt[res.back()-'a']>0){
                vis[res.back()-'a']=0;
                res.pop_back();
            }
            res+=c;
            vis[c-'a']=1;
        }
        return res;
    }
};
