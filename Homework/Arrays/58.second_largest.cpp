class Solution {
public:
    int print2largest(vector<int>& arr) {
        int first=INT_MIN,second=INT_MIN;
        for(int x:arr){
            if(x>first){second=first;first=x;}
            else if(x>second&&x!=first) second=x;
        }
        return second==INT_MIN?-1:second;
    }
};
