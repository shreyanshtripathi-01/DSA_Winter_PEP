class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int lo=1,hi=position.back()-position.front();
        while(lo<hi){
            int mid=lo+(hi-lo+1)/2;
            if(canPlace(position,m,mid)) lo=mid;
            else hi=mid-1;
        }
        return lo;
    }
    bool canPlace(vector<int>& pos, int m, int gap) {
        int cnt=1,last=pos[0];
        for(int i=1;i<pos.size();i++){
            if(pos[i]-last>=gap){
                cnt++;
                last=pos[i];
            }
        }
        return cnt>=m;
    }
};
