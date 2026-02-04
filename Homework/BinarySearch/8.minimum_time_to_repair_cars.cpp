class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long lo=1,hi=(long long)ranks[0]*(long long)cars*cars;
        while(lo<hi){
            long long mid=lo+(hi-lo)/2;
            long long total=0;
            for(int r:ranks) total+=(long long)sqrt((double)mid/r);
            if(total>=cars) hi=mid;
            else lo=mid+1;
        }
        return lo;
    }
};
