class Solution {
public:
    vector<int> commonElements(vector<int>& A, vector<int>& B, vector<int>& C) {
        vector<int> res;
        int i=0,j=0,k=0;
        while(i<A.size()&&j<B.size()&&k<C.size()){
            if(A[i]==B[j]&&B[j]==C[k]){
                if(res.empty()||res.back()!=A[i]) res.push_back(A[i]);
                i++;j++;k++;
            }
            else if(A[i]<B[j]) i++;
            else if(B[j]<C[k]) j++;
            else k++;
        }
        return res;
    }
};
