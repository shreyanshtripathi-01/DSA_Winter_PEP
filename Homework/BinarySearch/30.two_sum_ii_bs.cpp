// BS approach: binary search for each element
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++){
            int t=target-numbers[i];
            int l=i+1,r=numbers.size()-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(numbers[mid]==t) return {i+1,mid+1};
                else if(numbers[mid]<t) l=mid+1;
                else r=mid-1;
            }
        }
        return {};
    }
};
