class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string res,word;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' ') word=s[i]+word;
            else if(!word.empty()){
                if(!res.empty()) res+=' ';
                res+=word;
                word="";
            }
        }
        if(!word.empty()){
            if(!res.empty()) res+=' ';
            res+=word;
        }
        return res;
    }
};
