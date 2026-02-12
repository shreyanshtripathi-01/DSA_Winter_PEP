class Solution {
public:
    long maximumSumSubarray(int K, vector<int>& Arr, int N) {
        long sum=0;
        for(int i=0;i<K;i++) sum+=Arr[i];
        long maxSum=sum;
        for(int i=K;i<N;i++){
            sum+=Arr[i]-Arr[i-K];
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
};
